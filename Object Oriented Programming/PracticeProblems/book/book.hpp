#ifndef BOOKHEADERDEF
#define BOOKHEADERDEF

#include <iostream>
#include <string>

using namespace std;

// Bookclass definition
class Book{
    public:
        string author, title, publisher, format;
        int price;
        void set_year_of_publication(int year);
        int get_year_of_publication() const;
    private:
        int year_of_publication;
};

#endif