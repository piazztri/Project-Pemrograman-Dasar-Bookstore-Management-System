///////////////////////////////////////////////////////////
//  OrderDetails.h
//  Implementation of the Class OrderDetails
//  Created on:      29-Nov-2025 4:40:44 PM
//  Original author: moog
///////////////////////////////////////////////////////////

#if !defined(EA_5DB0CD91_AD04_4af4_B86A_F896F79C1E6A__INCLUDED_)
#define EA_5DB0CD91_AD04_4af4_B86A_F896F79C1E6A__INCLUDED_

class OrderDetails
{

public:
	OrderDetails();
	virtual ~OrderDetails();

	totalCost();

private:
	string bookAuthor;
	string bookPrice;
	string bookTitle;
	string bookType;
	int quantity;
	string releaseYear;

};
#endif // !defined(EA_5DB0CD91_AD04_4af4_B86A_F896F79C1E6A__INCLUDED_)
