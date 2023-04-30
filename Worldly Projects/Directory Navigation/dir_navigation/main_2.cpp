
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <memory>

using namespace std;

// Component interface
class Component {
public:
    virtual string getName() = 0;
    virtual bool isDirectory() = 0;
    virtual vector<Component*> getChildren() = 0;
    virtual void add(Component* component) = 0;
    virtual void remove(Component* component) = 0;
};

// File class
class File : public Component {
private:
    string name_;
public:
    File(string name) : name_(name) {}
    string getName() { return name_; }
    bool isDirectory() { return false; }
    vector<Component*> getChildren() { return vector<Component*>(); }
    void add(Component* component) {}
    void remove(Component* component) {}
};

// Directory class
class Directory : public Component {
private:
    string name_;
    vector<Component*> children_;
public:
    Directory(string name) : name_(name) {}
    string getName() { return name_; }
    bool isDirectory() { return true; }
    vector<Component*> getChildren() { return children_; }
    void add(Component* component) { children_.push_back(component); }
    void remove(Component* component) {
        for (auto it = children_.begin(); it != children_.end(); ++it) {
            if (*it == component) {
                children_.erase(it);
                break;
            }
        }
    }
    Directory* getParent() {
        return dynamic_cast<Directory*>(parent_);
    }
};

// DirectoryFactory class
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
                Directory* dir = dynamic_cast<Directory*>(component);
                dir->parent_ = currentDir;
                currentDir->add(component);
                currentDir = dir;
            } else {
                component = new File(name);
                currentDir->add(component);
            }
            while (level <= getLevel(currentDir->getName())) {
                currentDir = currentDir->getParent();
            }
        }
        return root;
    }
private:
    static int getLevel(const string& line) {
        int level = 0;
        while (line[level] == ' ') {
            level++;
        }
        return level / 3;
    }
    static string getName(const string& line, int level) {
        int start = level * 3;
        if (line.size() <= start) {
            return "";
        }
        return line.substr(start);
    }
};
class Explorer {
private:
    Directory* root_;
    Directory* currentDir_;

public:
    Explorer(Directory* root) : root_(root), currentDir_(root) {}

    void process(istream& in, ostream& out) {
        while (true) {
            out << currentDir_->name_ << "> ";
            string command;
            getline(in, command);
            if (command == "list") {
                list(out, currentDir_);
            } else if (command == "listall") {
                listAll(out, currentDir_);
            } else if (command.substr(0, 6) == "chdir ") {
                string name = command.substr(6);
                Directory* dir = dynamic_cast<Directory*>(currentDir_->getChild(name));
                if (dir) {
                    currentDir_ = dir;
                } else {
                    out << "no such directory" << endl;
                }
            } else if (command == "up") {
                if (currentDir_ != root_) {
                    currentDir_ = currentDir_->getParent();
                }
            } else if (command == "count") {
                out << countFiles(currentDir_) << endl;
            } else if (command == "countall") {
                out << countAllFiles(currentDir_) << endl;
            } else if (command == "q") {
                break;
            } else {
                out << "invalid command" << endl;
            }
        }
    }

    void list(ostream& out, Directory* dir) {
        for (Component* component : dir->children_) {
            if (!component->isDirectory()) {
                out << component->getName() << " ";
            }
        }
        out << endl;
    }

    void listAll(ostream& out, Component* component, int level = 0) {
        if (component->isDirectory()) {
            Directory* dir = dynamic_cast<Directory*>(component);
            out << string(level * 3, ' ') << dir->getName() << ":" << endl;
            for (Component* child : dir->children_) {
                listAll(out, child, level + 1);
            }
        } else {
            out << string(level * 3, ' ') << component->getName() << endl;
        }
    }

    int countFiles(Component* component) {
        int count = 0;
        if (component->isDirectory()) {
            Directory* dir = dynamic_cast<Directory*>(component);
            for (Component* child : dir->children_) {
                count += countFiles(child);
            }
        } else {
            count++;
        }
        return count;
    }

    int countAllFiles(Component* component) {
        int count = 0;
        if (component->isDirectory()) {
            Directory* dir = dynamic_cast<Directory*>(component);
            for (Component* child : dir->children_) {
                count += countAllFiles(child);
            }
        } else {
            count++;
        }
        return count;
    }
};


int main() {
    ifstream in("directory.dat");
    Directory* root = DirectoryFactory::createDirTree(in);
    Explorer exp(root);
    exp.process(cin, cout);
    delete root;
    return 0;
}
