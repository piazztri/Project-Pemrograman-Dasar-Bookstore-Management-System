///////////////////////////////////////////////////////////
//  Class1.h
//  Implementation of the Class Class1
//  Created on:      29-Nov-2025 9:20:19 AM
//  Original author: moog
///////////////////////////////////////////////////////////

#if !defined(EA_D771EDC2_64C4_4c4b_8783_0A020046F11D__INCLUDED_)
#define EA_D771EDC2_64C4_4c4b_8783_0A020046F11D__INCLUDED_

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
#endif // !defined(EA_D771EDC2_64C4_4c4b_8783_0A020046F11D__INCLUDED_)
