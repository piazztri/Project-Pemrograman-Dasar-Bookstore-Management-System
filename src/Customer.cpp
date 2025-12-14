///////////////////////////////////////////////////////////
// Implementation of the Class Customer 
// Created on: 29-Nov-2025 4:38:51 PM 
// Original author: moog 
/////////////////////////////////////////////////////////// 

#include "Customer.h" 
#include "login.h"
#include <iostream> 
#include <limits>
#include <cstdlib> 
#include <ctime>

Customer::Customer(){ 
    customerName = "-"; 
    customerAddress = "-"; 
    phoneNumber = "-"; 
    bankAccount = "-"; 
    emailUser = "-";
} 

Customer::~Customer(){ 

} 

bool Customer::login() {
    if (emailUser == "-") {  //not registered
        cout << "You must register first!\n";
        return false;
    }

    Login log;
    string inputEmail;

    if (log.verifyLogin(inputEmail)) { //login using registered email and password
        if (inputEmail == emailUser && log.passLogin == password) {
            cout << "Login successful! Welcome, " << emailUser << ".\n";
            return true;
        } else {
            cout << "Invalid email or password!\n"; 
            return false;
        }
    }
    return false;
}

void Customer::registerUser() { //to allow customer to register a new account
    Register reg;
    reg.verifyRegister();
    emailUser = reg.getEmail(); 
    password = reg.getPassword();
}


void Customer::updateProfile(){ //to update customer's profile
    cout << "\n========= Updating my profile ==========\n"; 
    cout << "Enter your name: "; getline(cin, customerName); 
    cout << "Enter your address: "; getline(cin, customerAddress); 
    cout << "Enter your phone number: "; getline(cin, phoneNumber); 
    cout << "Enter your bank account: "; getline(cin, bankAccount); 
    cout << "Profile updated successfully!\n"; } 
    
void Customer::viewCatalog(Catalog &cat) { //to view book catalog
    int choice;

    while (true) {
        cout << "\n=== Book Info ===\n";
        cout << "Title  : " << cat.getTitle() << endl;
        cout << "Author : " << cat.getAuthor() << endl;
        cout << "Type   : " << cat.getType() << endl;
        cout << "Stock  : " << cat.getStock() << endl;
        cout << "Price  : $" << cat.getPrice() << endl;
        cout << "----------------------\n";

        cout << "1. Back to Dashboard\n";
        cout << "Enter your choice: ";

        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (choice == 1) {
            break; // return to Customer Dashboard
        }

        cout << "Invalid choice. Please try again.\n";
    }
}

void Customer::buyBooks(Catalog &cat) { //to purchase book
    Orders order;
    int choice;
    
    do {
        cout << "\n=== Buy Books ===\n";
        cout << "Book Info:\n";
        cout << "Title  : " << cat.getTitle() << endl;
        cout << "Author : " << cat.getAuthor() << endl;
        cout << "Type   : " << cat.getType() << endl;
        cout << "Stock  : " << cat.getStock() << endl;
        cout << "Price  : $" << cat.getPrice() << endl;
        cout << "---------------------------\n";

        string title;

        cout << "Enter Book Title to Buy: "; //choose book title to buy
        
        getline(cin, title);

        if (cat.getStock() == 0) { //book quantity = 0
            cout << "Book is not available\n";
            return; //go back to dashboard immediately
        }

            int qty;
            cout << "Enter Quantity: ";
            cin >> qty;

        if (qty > cat.getStock()) { //book quantity < order quantity 
            cout << "Only " << cat.getStock() << " book(s) available! Please enter a smaller quantity.\n";
            return; //go back to dashboard
        }

        double totalPrice = cat.getPrice() * qty; //to count total payment
        cout << "Total Price: $" << totalPrice << endl;

        int payChoice;
        cout << "Continue to payment?\n1. Continue\n2. Cancel\nEnter: ";
        cin >> payChoice;

        if (payChoice == 1) {
            //generate a random 3-digit code to make payment
            srand(time(nullptr));
            int code = 100 + rand() % 900;
            int inputCode;
            cout << "Payment Code: " << code << endl;
            cout << "Enter Payment Code: ";
            cin >> inputCode;

            if (inputCode == code) {
                cout << "Payment Successful!\n";
                //display the order summary
                OrderDetails item(cat.getTitle(), cat.getAuthor(), title, qty, to_string(cat.getPrice()));
                order.addItem(item);
                order.displayOrderSummary();
                cat.reduceStock(qty);
                
            } else {
                cout << "Code Invalid!\n";
            }
        }

        cout << "\nReturning to Customer Dashboard...\n";
        return; //exit buyBooks function

    } while (choice != 1);
}