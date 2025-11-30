///////////////////////////////////////////////////////////
//  Catalog.h
//  Implementation of the Class Catalog
//  Created on:      29-Nov-2025 4:40:41 PM
//  Original author: moog
///////////////////////////////////////////////////////////

#ifndef _CATALOG_H
#define _CATALOG_H

#include <string>
using namespace std;
class Catalog
{

public:
	Catalog();
	virtual ~Catalog();
	void updateInfo();
	void displayCatalog();

private:
	string bookAuthor;
	int bookAvailability;
	string bookTitle;
	string bookType;

};
#endif // _CATALOG_H
