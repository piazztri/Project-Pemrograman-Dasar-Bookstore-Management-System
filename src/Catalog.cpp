///////////////////////////////////////////////////////////
//  Catalog.cpp
//  Implementation of the Class Catalog
//  Created on:      29-Nov-2025 4:40:41 PM
//  Original author: moog
///////////////////////////////////////////////////////////

#include "Catalog.h"
#include <iostream>
#include <limits>

Catalog::Catalog(){
    bookTitle = "-";
    bookAuthor = "-";
    bookType = "-";
    bookAvailability = 0;
    bookPrice = 0.0;
}

Catalog::~Catalog(){

}

void Catalog::updateInfo() { //to update book catalog for administrator
    cout << "\n========== Update Book Info =========\n";

    cout << "Enter Book Title: ";
    getline(cin, bookTitle);

    cout << "Enter Book Author: ";
    getline(cin, bookAuthor);

    cout << "Enter Book Type: ";
    getline(cin, bookType);

    while (true) {
        cout << "Enter Book Availability: ";

        if (cin >> bookAvailability) {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;
        }

        cout << "Invalid input. Please enter a NUMBER.\n"; //quantity must be a number
        cin.clear(); //clear fail state
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //discard bad input
    }

    while (true) {
    cout << "Enter Book Price: $";
    if (cin >> bookPrice) {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        break;
    }
    cout << "Invalid input. Please enter a NUMBER.\n";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }


    cout << "Data Updated Successfully!\n";
}

string Catalog::getTitle() const {
    return bookTitle;
}

string Catalog::getAuthor() const {
    return bookAuthor;
}

string Catalog::getType() const {
    return bookType;
}

int Catalog::getStock() const {
    return bookAvailability;
}

double Catalog::getPrice() const {
    return bookPrice;
}

void Catalog::reduceStock(int qty){ //to reduce book quantity after get purchased
    if(qty <= bookAvailability){
        bookAvailability -= qty;
    } else {
        cout << "Book is not available\n";
    }
}