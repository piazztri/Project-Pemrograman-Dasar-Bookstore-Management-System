///////////////////////////////////////////////////////////
//  Class1.h
//  Implementation of the Class Class1
//  Created on:      29-Nov-2025 9:20:19 AM
//  Original author: moog
///////////////////////////////////////////////////////////

#ifndef CLASS1_H
#define CLASS1_H

#include <string>
using namespace std;
class Class1
{

public:
	Class1();
	virtual ~Class1();

	void lastName();

private:
	string firstName;
	string lastName;

	void firstName();

};

class Register
{

public:
	Register();
	virtual ~Register();

	bool verifyLogin();

private:
	string emailUser;
	string password;

};
#endif // CLASS1_H
