///////////////////////////////////////////////////////////
//  Orders.h
//  Implementation of the Class Orders
//  Created on:      29-Nov-2025 4:40:35 PM
//  Original author: moog
///////////////////////////////////////////////////////////

#ifndef ORDERS_H
#define ORDERS_H


#include "OrderDetails.h"
#include <string>
#include <vector>
using namespace std;

class Orders
{

public:
	string customerName;
    string paymentMethod;

    vector<OrderDetails> items; //list of order detail items

    Orders();
    ~Orders();

    void addItem(const OrderDetails &item);
    double getTotal() const;
    void displayOrderSummary() const;
    void clearOrder();
};
#endif 
