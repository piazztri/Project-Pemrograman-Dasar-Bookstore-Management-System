///////////////////////////////////////////////////////////
//  OrderDetails.h
//  Implementation of the Class OrderDetails
//  Created on:      29-Nov-2025 4:40:44 PM
//  Original author: moog
///////////////////////////////////////////////////////////

#ifndef ORDERDETAILS_H
#define ORDERDETAILS_H

#include <string>
using namespace std;
class OrderDetails
{

public:
	OrderDetails();
	virtual ~OrderDetails();

	double totalCost();

private:
	string bookAuthor;
	string bookPrice;
	string bookTitle;
	string bookType;
	int quantity;
	string releaseYear;

};
#endif // !ORDERDETAILS_H
