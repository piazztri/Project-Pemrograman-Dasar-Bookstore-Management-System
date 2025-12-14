/////////////////////////////////////////////////////////// 
// Orders.cpp 
// Implementation of the Class Orders
// Created on: 29-Nov-2025 4:40:36 PM 
// Original author: moog 
/////////////////////////////////////////////////////////// 

#include "Orders.h"
#include <iostream>
#include <iomanip>
using namespace std;

Orders::Orders() {
    customerName = "-";
    paymentMethod = "-";
}

Orders::~Orders() {}

void Orders::addItem(const OrderDetails &item) { //add an order item to current order
    items.push_back(item);
}


double Orders::getTotal() const { //to count total cost
    double total = 0.0;
    for (const auto &item : items) {
        total += item.totalCost();
    }
    return total;
}

void Orders::displayOrderSummary() const { //display order summary
    cout << "\n=== Order Summary ===\n";
    for (const auto &item : items) {
        cout << "Book: " << item.bookTitle 
             << " | Type: " << item.bookType
             << " | Quantity: " << item.quantity
             << " | Price: $" << item.bookPrice
             << " | Total: $" << item.totalCost() << endl;
    }
    cout << "Total Payment: $" << getTotal() << endl;
}

void Orders::clearOrder() { //clear all items
    items.clear();
}
