///////////////////////////////////////////////////////////
//  Administrator.h
//  Implementation of the Class Administrator
//  Created on:      29-Nov-2025 4:40:39 PM
//  Original author: moog
///////////////////////////////////////////////////////////

#ifndef _ADMINISTRATOR_H
#define _ADMINISTRATOR_H

#include "Class1.h"
#include <string>
using namespace std;
class Administrator : public Register
{

public:
	Administrator();
	~Administrator();
	bool updateCatalog();

private:
	string adminEmail;
	string adminName;
	string adminPassword;
};
#endif // _ADMINISTRATOR_H
