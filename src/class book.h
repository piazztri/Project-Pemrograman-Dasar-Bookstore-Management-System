///////////////////////////////////////////////////////////
//  class book.h
//  Implementation of the Class Customer
//  Created on:      29-Nov-2025 4:38:51 PM
//  Original author: moog
///////////////////////////////////////////////////////////

#ifndef CLASSBOOK_H
#define CLASSBOOK_H

#include "Orders.h"
#include "Class1.h"
#include <string>
using namespace std;

class Customer : public Register
{

public:
	Customer();
	virtual ~Customer();
	Orders *m_Orders;
	void login();
	void registerUser();
	void updateProfile();

private:
	string bankAccount;
	string customerAddress;
	string customerName;
	string phoneNumber;
};
#endif // CLASSBOOK_H
