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
                if (cust.login()) {
                    int membchoice;
                    cout << "\nWelcome to the Customer Dashboard!\n";
                    cout << "1. View Catalog\n";
                    cout << "2. Update Profile\n";
                    cout << "3. Logout\n";
                    cout << "Enter your choice: ";
                    cin >> membchoice;
                    cin.ignore(); // To ignore the newline character after integer input
                    switch (membchoice) {
                        case 1: {
                            Catalog cat;
                            cust.viewCatalog(cat);
                            break;
                        }
                        case 2:
                            cust.updateProfile();
                            break;
                        case 3:
                            cout << "Logging out...\n";
                            break;
                        default:
                            cout << "Invalid choice. Please try again.\n";
                    }
                }
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
                    int admChoice;
                    cout << "Welcome to the Admin Dashboar!\n";
                    cout << "1. Update Catalog\n";
                    cout << "2. Logout\n";
                    cout << "Enter your choice: ";
                    cin >> admChoice;
                    cin.ignore(); // To ignore the newline character after integer input
                    switch (admChoice) {
                        case 1: {
                            Catalog cat;
                            if (admin.updateCatalog(cat)) {
                                cout << "Catalog updated successfully.\n";
                            } else {
                                cout << "Failed to update catalog.\n";
                            }
                            break;
                        }
                        case 2:
                            cout << "Logging out...\n";
                            break;
                        default:
                            cout << "Invalid choice. Please try again.\n";
                    }
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
    int mainChoice;
    do {
        cout << "\n===== Main Menu =====\n";
        cout << "1. Customer Menu\n";
        cout << "2. Administrator Menu\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> mainChoice;
        cin.ignore(); // To ignore the newline character after integer input

        switch (mainChoice) {
            case 1:
                customerMenu();
                break;
            case 2:
                adminMenu();
                break;
            case 3:
                cout << "Exiting the program. Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (mainChoice != 3);
}
