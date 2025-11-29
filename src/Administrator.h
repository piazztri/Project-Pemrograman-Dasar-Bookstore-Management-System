///////////////////////////////////////////////////////////
//  Administrator.h
//  Implementation of the Class Administrator
//  Created on:      29-Nov-2025 4:40:39 PM
//  Original author: moog
///////////////////////////////////////////////////////////

#if !defined(EA_F7B8C6F4_3A2D_41cc_B767_B0B9A03A5C9B__INCLUDED_)
#define EA_F7B8C6F4_3A2D_41cc_B767_B0B9A03A5C9B__INCLUDED_

#include "Class1.h"

class Administrator : public Register
{

public:
	Administrator();
	virtual ~Administrator();

	bool updateCatalog();

private:
	string adminEmail;
	string adminName;
	string adminPassword;

};
#endif // !defined(EA_F7B8C6F4_3A2D_41cc_B767_B0B9A03A5C9B__INCLUDED_)
