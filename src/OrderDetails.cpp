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
}

OrderDetails::OrderDetails(const string &title, //initialize OrderDetails book
                           const string &author,
                           const string &type,
                           int qty,
                           const string &price) {
    bookTitle = title;
    bookAuthor = author;
    bookType = type;
    quantity = qty;
    bookPrice = price;
}

double OrderDetails::totalCost() const { //to count total price 
    double p = 0.0;
    try {
        p = stod(bookPrice);
    } catch (...) {
    }
    return p * static_cast<double>(quantity);
}