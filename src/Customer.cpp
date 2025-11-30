///////////////////////////////////////////////////////////
//  class book.cpp
//  Implementation of the Class Customer
//  Created on:      29-Nov-2025 4:38:51 PM
//  Original author: moog
///////////////////////////////////////////////////////////

#include "Customer.h"
#include <iostream>  

Customer::Customer(){
    customerName = "-";
    customerAddress = "-";
    phoneNumber = "-";
    bankAccount = "-";
}

Customer::~Customer(){

}

void Customer::login(){
    Login loginObj;
    loginObj.verifyLogin();
}

void Customer::registerUser(){
    verifyRegister();
}

void Customer::updateProfile(){
    cout << "\n========= Updating my profile ==========\n";
    cout << "Enter your name: ";
    getline(cin, customerName);
    cout << "Enter your address: ";
    getline(cin, customerAddress);
    cout << "Enter your phone number: ";
    getline(cin, phoneNumber);
    cout << "Enter your bank account: ";
    getline(cin, bankAccount);
    cout << "Profile updated successfully!\n";
}

void Customer::viewCatalog(Catalog cat) {
    cat.displayCatalog();
}