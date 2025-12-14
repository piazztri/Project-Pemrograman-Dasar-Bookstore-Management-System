///////////////////////////////////////////////////////////
//  Login.h
//  Implementation of the Class Login
//  Created on:      30-Nov-2025 4:22:31 PM
//  Original author: moog
///////////////////////////////////////////////////////////

#ifndef LOGIN_H
#define LOGIN_H

#include <string>
using namespace std;

class Login {
public:
    string emailLogin;   
    string passLogin;

    Login();
    ~Login();

    bool verifyLogin(string &outEmail);
};

#endif
