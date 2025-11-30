///////////////////////////////////////////////////////////
//  Orders.cpp
//  Implementation of the Class Orders
//  Created on:      29-Nov-2025 4:40:36 PM
//  Original author: moog
///////////////////////////////////////////////////////////

#include "Orders.h"
#include <iostream>
#include <string>
using namespace std;

Orders::Orders(){
    customerName = "-";
    paymentMethod = "-";
}

Orders::~Orders(){

}

string Orders::toOrder(){
    cout << "Enter customer name: ";
    getline(cin, customerName);
    cout << "Enter payment method: ";
    getline(cin, paymentMethod);
}