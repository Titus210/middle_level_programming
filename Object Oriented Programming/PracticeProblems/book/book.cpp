#include <cassert>
#include "Book.hpp"

void Book::set_year_of_publication(int year) {
    assert ((year > 1440) && (year < 2020));
    year_of_publication = year;
}

int Book::get_year_of_publication() const{
    return year_of_publication;
}