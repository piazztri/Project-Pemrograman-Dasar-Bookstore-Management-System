///////////////////////////////////////////////////////////
//  Catalog.h
//  Implementation of the Class Catalog
//  Created on:      29-Nov-2025 4:40:41 PM
//  Original author: moog
///////////////////////////////////////////////////////////

#if !defined(EA_047EA1F6_3053_488a_8D0B_60B1BEAA1B9C__INCLUDED_)
#define EA_047EA1F6_3053_488a_8D0B_60B1BEAA1B9C__INCLUDED_

class Catalog
{

public:
	Catalog();
	virtual ~Catalog();

	updateInfo();

private:
	string bookAuthor;
	int bookAvailability;
	string bookTitle;
	string bookType;

};
#endif // !defined(EA_047EA1F6_3053_488a_8D0B_60B1BEAA1B9C__INCLUDED_)
