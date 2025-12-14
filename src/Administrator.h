///////////////////////////////////////////////////////////
//  Administrator.h
//  Implementation of the Class Administrator
//  Created on:      29-Nov-2025 4:40:39 PM
//  Original author: moog
///////////////////////////////////////////////////////////

#ifndef _ADMINISTRATOR_H
#define _ADMINISTRATOR_H

#include "Register.h"
#include "Catalog.h"
class Administrator : public Register
{

public:
	bool loginAdmin(string password);
	bool updateCatalog(Catalog &cat);

private:
};
#endif 
