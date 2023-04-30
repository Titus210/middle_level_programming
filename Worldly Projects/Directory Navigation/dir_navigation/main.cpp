#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

class Component {
public:
    virtual void list(ostream& out) const = 0;
    virtual bool isDirectory() const = 0;
    virtual Component* getChild(string name) const = 0;
    virtual ~Component() {}
};

class Directory : public Component {
public:
    Directory(string name) : name_(name) {}

    void list(ostream& out) const override {
        out << name_ << ":" << endl;
        for (const auto& child : children_) {
            out << child->name_ << " ";
        }
        out << endl;
    }

    bool isDirectory() const override {
        return true;
    }

    Component* getChild(string name) const override {
        for (const auto& child : children_) {
            if (child->name_ == name) {
                return child;
            }
        }
        return nullptr;
    }

    void addChild(Component* child) {
        children_.push_back(child);
    }

    ~Directory() override {
        for (const auto& child : children_) {
            delete child;
        }
    }

    string name_;
    vector<Component*> children_;
};

class File : public Component {
public:
    File(string name) : name_(name) {}

    void list(ostream& out) const override {
        out << name_ << endl;
    }

    bool isDirectory() const override {
        return false;
    }

    Component* getChild(string name) const override {
        return nullptr;
    }

    string name_;
};

class DirectoryFactory {
public:
    static Component* createDirTree(istream& in) {
        Directory* root = new Directory("root");
        Directory* currentDir = root;
        string line;
        while (getline(in, line)) {
            int level = getLevel(line);
            string name = getName(line, level);
            if (name.empty()) continue; // skip empty lines
            Component* component;
            if (name.back() == ':') {
                component = new Directory(name.substr(0, name.size() - 1));
            } else {
                component = new File(name);
            }
            while (level <= getLevel(currentDir->name_)) {
                currentDir = dynamic_cast<Directory*>(currentDir->getParent());
            }
            currentDir->addChild(component);
            if (component->isDirectory()) {
                currentDir = dynamic_cast<Directory*>(component);
            }
        }
        return root;
    }

private:
    static int getLevel(const string& line) {
        int level = 0;
        while (line[level] == ' ') {
            ++level;
        }
        return level / 3;
    }

    static string getName(const string& line, int level) {
        string name;
        size_t start = level * 3;
        while (start < line.size() && line[start] == ' ') {
            ++start;
        }
        if (start < line.size()) {
            name = line.substr(start);
        }
        return name;
    }
};
class Explorer {
public:
    Explorer(Component* root) : currentDir_(root) {}

    void process(istream& in, ostream& out) {
        string command;
        while (true) {
            out << currentDir_->name_ << "> ";
            getline(in, command);
            if (command == "list") {
                listFiles(out, currentDir_);
            } else if (command == "listall") {
                listAllFiles(out, currentDir_);
            } else if (command == "count") {
                countFiles(out, currentDir_);
            } else if (command == "countall") {
                countAllFiles(out, currentDir_);
            } else if (command.substr(0, 5) == "chdir") {
                string entry = command.substr(6);
                if (!entry.empty()) {
                    if (entry == "..") {
                        currentDir_ = currentDir_->getParent();
                    } else {
                        Component* child = currentDir_->getChild(entry);
                        if (child && child->isDirectory()) {
                            currentDir_ = dynamic_cast<Directory*>(child);
                        } else {
                            out << "no such directory" << endl;
                        }
                    }
                }
            } else if (command == "up") {
                currentDir_ = currentDir_->getParent();
            } else if (command == "q") {
                break;
            } else {
                out << "invalid command" << endl;
            }
        }
    }

private:
    Component* currentDir_;
};

int main() {
    ifstream in("directory.dat");
    Component* root = DirectoryFactory::createDirTree(in);
    in.close();
    Explorer exp(root);
    exp.process(cin, cout);
    delete root; // free memory
    return 0;
}
