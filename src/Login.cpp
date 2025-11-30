///////////////////////////////////////////////////////////
//  Login.cpp
//  Implementation of the Class Login
//  Created on:      30-Nov-2025 4:22:31 PM
//  Original author: moog
///////////////////////////////////////////////////////////

#include "Login.h"
#include <iostream>

Login::Login(){
	emailLogin = "-";
	passLogin = "-";
}

Login::~Login(){

}
bool Login::verifyLogin(){
	cout << "\n=== Login ===\n";
	cout << "Enter your email: ";
	getline(cin, emailLogin);
	cout << "Enter your password: ";
	getline(cin, passLogin);
	return true;
}