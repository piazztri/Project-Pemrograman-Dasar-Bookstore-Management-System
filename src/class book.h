///////////////////////////////////////////////////////////
//  class book.h
//  Implementation of the Class Customer
//  Created on:      29-Nov-2025 4:38:51 PM
//  Original author: moog
///////////////////////////////////////////////////////////

#if !defined(EA_3987092E_63CA_4e99_A1F4_BFCF1A1A3E4D__INCLUDED_)
#define EA_3987092E_63CA_4e99_A1F4_BFCF1A1A3E4D__INCLUDED_

#include "Orders.h"
#include "Class1.h"

class Customer : public Register
{

public:
	Customer();
	virtual ~Customer();
	Orders *m_Orders;

	login();
	register();
	updateProfile();

private:
	string bankAccount;
	string customerAddress;
	string customerName;
	string phoneNumber;

};
#endif // !defined(EA_3987092E_63CA_4e99_A1F4_BFCF1A1A3E4D__INCLUDED_)
