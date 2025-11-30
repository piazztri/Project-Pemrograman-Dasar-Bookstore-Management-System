///////////////////////////////////////////////////////////
//  Class1.h
//  Implementation of the Class Class1
//  Created on:      29-Nov-2025 9:20:19 AM
//  Original author: moog
///////////////////////////////////////////////////////////

#ifndef REGISTER_H
#define REGISTER_H

#include <string>
using namespace std;
class Register
{

public:
	Register();
	virtual ~Register();

	void verifyRegister();

private:
	string emailUser;
	string password;
};
#endif // REGISTER_H
