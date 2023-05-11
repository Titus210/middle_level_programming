#include <iostream>
using namespace std;

#include "book.hpp"

int main(int argc, char *argv[])
{
    Book promotion_book;

    promotion_book.author = "Iris Murdoch";
    promotion_book.title = "The sea, the sea";
    promotion_book.publisher = "Chato & Windus";
    promotion_book.price = 299;
    promotion_book.format = "hardback";
    promotion_book.set_year_of_publication(1900);

    // print information about the object promotion book
    cout << "Year of publication of promotion book " << promotion_book.title << "is " << promotion_book.get_year_of_publication() << endl;
}