#include <bits/stdc++.h>
#include "Catalog.h"
#include "Administrator.h"
#include "Customer.h"
using namespace std;

void customerMenu(){
    Customer cust;
    int choice;

    do {
        cout << "\n===== Customer Menu =====\n";
        cout << "1. Register\n";
        cout << "2. Login\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // To ignore the newline character after integer input

        switch (choice) {
            case 1:
                cust.registerUser();
                break;
            case 2:
                cust.login();
                break;
            case 3:
                cout << "Exiting Customer Menu.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0 && choice < 4);
}

void adminMenu(){
    Administrator admin;
    int choice;
    do {
        cout << "\n===== Administrator Menu =====\n";
        cout << "1. Login as Admin\n";
        cout << "2. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // To ignore the newline character after integer input

        switch (choice) {
            case 1: {
                string password;
                cout << "Enter admin password: ";
                getline(cin, password);
                if (admin.loginAdmin(password)) {
                    cout << "Admin logged in successfully.\n";
                    // Further admin functionalities can be added here
                } else {
                    cout << "Invalid password. Access denied.\n";
                }
                break;
            }
            case 2:
                cout << "Exiting Administrator Menu.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0 && choice < 3);   
}

int main(){
    
}
