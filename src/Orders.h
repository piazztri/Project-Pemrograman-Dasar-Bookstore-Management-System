///////////////////////////////////////////////////////////
//  Orders.h
//  Implementation of the Class Orders
//  Created on:      29-Nov-2025 4:40:35 PM
//  Original author: moog
///////////////////////////////////////////////////////////

#ifndef ORDERS_H
#define ORDERS_H

#include "Catalog.h"
#include "OrderDetails.h"
#include <string>
using namespace std;

class Orders
{

public:
	Orders();
	virtual ~Orders();
	Catalog *m_Catalog;
	OrderDetails *m_OrderDetails;

	string toOrder();

private:
	string customerName;
	string paymentMethod;

};
#endif // ORDERS_H
