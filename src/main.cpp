#include <bits/stdc++.h>
#include "Catalog.h"
#include "Administrator.h"
#include "Customer.h"
#include <limits>

using namespace std;

Catalog cat;
bool isRegistered = false;
void customerMenu(Customer &cust, Catalog &catalog) {
    int choice;

    do {
        cout << "\n===== Customer Menu =====\n";
        cout << "1. Register\n";
        cout << "2. Login\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (choice) {
            case 1:
                cust.registerUser();
                isRegistered = true;
                break;

            case 2:
                if (!isRegistered){ //if haven't registered
                    cout << "You must register first\n";
                    break;
                }

                if (cust.login()) {
                    int membchoice;

                    do {
                        cout << "\nWelcome to the Customer Dashboard!\n";
                        cout << "1. View Catalog\n";
                        cout << "2. Update Profile\n";
                        cout << "3. Buy Books\n";
                        cout << "4. Logout\n";
                        cout << "Enter your choice: ";
                        cin >> membchoice;
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');

                        switch (membchoice) {
                            case 1:
                                cust.viewCatalog(cat); 
                                break;

                            case 2:
                                cust.updateProfile();
                                break;

                            case 3:
                                cust.buyBooks(cat);
                                break;
                            
                            case 4:
                                cout << "Logging out...\n";
                                membchoice = 4; //exit inner loop
                                choice = 3; //exit customer menu
                                break;

                            default:
                                cout << "Invalid choice. Please try again.\n";
                        }

                    } while (membchoice != 4);
                }
                break;

            case 3:
                cout << "Exiting Customer Menu.\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 3);
}


void adminMenu(Catalog &catalog) {
    Administrator admin;
    int choice;

    do {
        cout << "\n===== Administrator Menu =====\n";
        cout << "1. Login as Admin\n";
        cout << "2. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (choice) {
            case 1: {
                string password;
                cout << "Enter admin password: ";
                getline(cin, password);

                if (admin.loginAdmin(password)) {
                    int admChoice;

                    do {
                        cout << "\nWelcome to the Admin Dashboard!\n";
                        cout << "1. Update Catalog\n";
                        cout << "2. Logout\n";
                        cout << "Enter your choice: ";
                        cin >> admChoice;
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');

                        switch (admChoice) {
                            case 1:
                                if (admin.updateCatalog(cat)) {
                                    cout << "Catalog updated successfully.\n";
                                } else {
                                    cout << "Failed to update catalog.\n";
                                }
                                break;

                            case 2:
                                cout << "Logging out...\n";
                                break;

                            default:
                                cout << "Invalid choice. Please try again.\n";
                        }

                    } while (admChoice != 2);
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

    } while (choice != 2);
}


int main() {
    Customer cust; //global customer object
    Catalog catalog;  

    int mainChoice;

    do {
        cout << "\n===== Main Menu =====\n";
        cout << "1. Customer Menu\n";
        cout << "2. Administrator Menu\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> mainChoice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (mainChoice) {
            case 1:
                customerMenu(cust, catalog);
                break;

            case 2:
                adminMenu(catalog);
                break;

            case 3:
                cout << "Exiting the program. Goodbye!\n"; //completely terminated the program
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (mainChoice != 3);

    return 0;
}
