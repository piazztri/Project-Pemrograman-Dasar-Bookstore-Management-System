///////////////////////////////////////////////////////////
//  Catalog.cpp
//  Implementation of the Class Catalog
//  Created on:      29-Nov-2025 4:40:41 PM
//  Original author: moog
///////////////////////////////////////////////////////////

#include "Catalog.h"
#include <iostream>


Catalog::Catalog(){
    bookTitle = "-";
    bookAuthor = "-";
    bookType = "-";
    bookAvailability = 0;
}

Catalog::~Catalog(){

}

void Catalog::updateInfo(){
cout << "\n========== Update Book Info =========\n";
cout << "Enter Book Title: ";
getline(cin, bookTitle);
cout << "Enter Book Author: ";
getline(cin, bookAuthor);
cout << "Enter Book Type: ";
getline(cin, bookType);
cout << "Enter Book Availability: ";
cin >> bookAvailability;
cout << "Data Updated Successfully!\n";
}