///////////////////////////////////////////////////////////
//  Catalog.h
//  Implementation of the Class Catalog
//  Created on:      29-Nov-2025 4:40:41 PM
//  Original author: moog
///////////////////////////////////////////////////////////

#ifndef CATALOG_H
#define CATALOG_H

#include <string>
using namespace std;

class Catalog {
public:
    Catalog();
    virtual ~Catalog();

    void updateInfo();
    void displayCatalog();

    string getTitle() const;
    string getAuthor() const;
    string getType() const;
    int getStock() const;
    double getPrice() const;
    void reduceStock(int qty);

private:
    string bookTitle;
    string bookAuthor;
    string bookType;
    int bookAvailability;
    double bookPrice;
};

#endif
