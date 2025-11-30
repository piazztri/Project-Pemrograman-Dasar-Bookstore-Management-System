#include <bits/stdc++.h>
#include "Administrator.h"
#include "Catalog.h"
#include "Customer.h"
#include "Login.h"
#include "OrderDetails.h"
#include "Orders.h"
#include "Register.h"
using namespace std;

int main(){
    cout << "Welcome to the Bookstore Management System!" << endl;
    cout << "Please select an option:" << endl;
    cout << "1. Login" << endl;
    cout << "2. Register" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;
    cin.ignore(); // To ignore the newline character after the integer input

    switch(choice){
        case 1:{
            Login login;
            login.verifyLogin();
            break;
        }
        case 2:{
            Register reg;
            reg.verifyRegister();
            break;
        }
        case 3:{
            cout << "Exiting the system. Goodbye!" << endl;
            break;
        }
        default:{
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    }
    return 0;
}
