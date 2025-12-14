///////////////////////////////////////////////////////////
//  Administrator.cpp
//  Implementation of the Class Administrator
//  Created on:      29-Nov-2025 4:40:39 PM
//  Original author: moog
///////////////////////////////////////////////////////////

#include "Administrator.h"
#include <iostream>

bool Administrator::loginAdmin (string password) { //admin password to login
    return password == "admin123";
}

bool Administrator::updateCatalog(Catalog &cat) { //to allow administrator to update the catalog
    cat.updateInfo();
    return true;
}
