//Comments denote what differs from the solution in the course by Bill Weinman

//#include <format>
#include <iostream>

//using std::format;
//using std::cout;

struct CatalogCard { //can also work in main()
    const char *title {}; //could have also used character arrays
    const char *author {};
    const char *publisher {};
    const char *subject {};
    long long ISBN {}; //const char
    long long OCLC {}; //const char
    double dewey {}; //short int
    //Second dewey variable to represent after the decimal for easier sorting
    int published_year {}; //short int
    int acquired_year {}; //short int
    int quantity_in_stock {}; //short int 
};

int main() {
    CatalogCard cc1 {
        "Carmilla",
        "Le Fanu, Sheridan",
        "The Dark Blue",
        "Fiction, Horror",
        9781948316385,
        893819621,
        0,
        1871,
        3023,
        1
    };

    printf("Title: %s\nAuthor: %s\nPublisher: %s\nSubject: %s\nISBN: %lld\nOCLC: %lld\nDewey Decimal: %f\nPublished Year: %i\nAcquired Year: %i\nQuantity in Stock: %i",
    cc1.title, cc1.author, cc1.publisher, cc1.subject, cc1.ISBN, cc1.OCLC, cc1.dewey, cc1.published_year, cc1.acquired_year, cc1.quantity_in_stock);

    //printed each individually
    //cout << format{"Title: {}\n", cc1.title}; and etc.
};