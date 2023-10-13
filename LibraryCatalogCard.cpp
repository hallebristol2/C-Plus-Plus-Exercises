#include <iostream>

struct CatalogCard {
    const char *title {};
    const char *author {};
    const char *publisher {};
    const char *subject {};
    long long ISBN {};
    long long OCLC {};
    double dewey {};
    int published_year {};
    int acquired_year {};
    int quantity_in_stock {};
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
};