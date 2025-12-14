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
	string bookAuthor;
	string bookPrice;
	string bookTitle;
	string bookType;
	int quantity;
	

OrderDetails();
OrderDetails(const string &title,
			const string &author,
            const string &type,
            int qty,
            const string &price);

	double totalCost() const;
};

#endif 
