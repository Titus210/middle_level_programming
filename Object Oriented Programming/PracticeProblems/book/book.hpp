#ifndef BOOKHEADERDEF
#define BOOKHEADERDEF

#include <iostream>

using namespace std;

// Bookclass definition
class Book{
    private:
        int year_of_publication;
    public:
        string author, title, publisher, format;
        int price;
        void set_year_of_publication(int year);
        void get_year_of_publication();
}

#endif