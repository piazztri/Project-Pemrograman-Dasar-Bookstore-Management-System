///////////////////////////////////////////////////////////
//  Class1.cpp
//  Implementation of the Class Class1
//  Created on:      29-Nov-2025 9:20:19 AM
//  Original author: moog
///////////////////////////////////////////////////////////

#include "Register.h"
#include <iostream>
#include <string>

Register::Register(){
	emailUser = "-";
	password = "-";
}

Register::~Register(){

}

bool Register::verifyRegister(){
	cout << "Enter your email: ";
	getline(cin, emailUser);
	cout << "Enter your password: ";
	getline(cin, password);
	return true;
}