///////////////////////////////////////////////////////////
//  class book.h
//  Implementation of the Class Customer
//  Created on:      29-Nov-2025 4:38:51 PM
//  Original author: moog
///////////////////////////////////////////////////////////

#ifndef CLASSBOOK_H
#define CLASSBOOK_H

#include "Orders.h"
#include "Register.h"
#include "Catalog.h"
#include "Login.h"
#include <string>
using namespace std;

class Customer : public Register
{

public:
	Customer();
	virtual ~Customer();
	Orders *m_Orders;

	void registerUser();
	bool login();
	void updateProfile();
	void viewCatalog(Catalog &cat);
	void buyBooks(Catalog &cat);

private:
	string bankAccount;
	string customerAddress;
	string customerName;
	string phoneNumber;
};
#endif 
