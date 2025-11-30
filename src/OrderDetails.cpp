///////////////////////////////////////////////////////////
//  OrderDetails.cpp
//  Implementation of the Class OrderDetails
//  Created on:      29-Nov-2025 4:40:44 PM
//  Original author: moog
///////////////////////////////////////////////////////////

#include "OrderDetails.h"
#include <iostream>

OrderDetails::OrderDetails(){
    bookAuthor = "-";
    bookPrice = "0.0";
    bookTitle = "-";
    bookType = "-";
    quantity = 0;
    releaseYear = "-";
}

OrderDetails::~OrderDetails(){

}

double OrderDetails::totalCost(){
    cout << "\n=== Details of Order: ===\n";
    cout << "Book Author: " << bookAuthor << endl;
    cout << "Book Title: " << bookTitle << endl;
    cout << "Book Type: " << bookType << endl;
    cout << "Release Year: " << releaseYear << endl;
    cout << "Quantity: " << quantity << endl;
    double price = stod(bookPrice);
    double total = price * quantity;
    cout << "Total Cost: Rp. " << total << endl;
    return total;
}