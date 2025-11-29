///////////////////////////////////////////////////////////
//  Orders.h
//  Implementation of the Class Orders
//  Created on:      29-Nov-2025 4:40:35 PM
//  Original author: moog
///////////////////////////////////////////////////////////

#if !defined(EA_93EF3E41_2A37_4826_8A03_223371A83554__INCLUDED_)
#define EA_93EF3E41_2A37_4826_8A03_223371A83554__INCLUDED_

#include "Catalog.h"
#include "OrderDetails.h"

class Orders
{

public:
	Orders();
	virtual ~Orders();
	Catalog *m_Catalog;
	OrderDetails *m_OrderDetails;

	toOrder();

private:
	string customerName;
	string paymentMethod;

};
#endif // !defined(EA_93EF3E41_2A37_4826_8A03_223371A83554__INCLUDED_)
