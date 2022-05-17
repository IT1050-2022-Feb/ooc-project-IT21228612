#include <iostream>
#include <cstring>
#include "item.h"


using namespace std ;

item::item() // default constructor  implementation
{
	F[0] = new feedback () ;
	itemID = "" ;
	name = "" ;
	supplierID = "" ;
	description = "" ;
	price = 0 ;
	quantity = 0 ;
	
}

item::item(string IID , string Iname ,string SID , string des , float Iprice , int IQty , string FeedbackID , int Rating )  // overloaded constructor implementation
{
	F[0] = new feedback (FeedbackID , Rating ) ;
	itemID = IID ;
	name = Iname ;
	supplierID = SID ;
	description = des ;
	price = Iprice ;
	quantity = IQty ;
	
}

item::~item() //destructor
{
	
}

void addOrders(order *od) 
{
	//method implementation
}

void item::assignDetails(string IID , string Iname ,string SID , string des , float Iprice , int IQty )
{
	//method implementation
}

void item::printDetails () 
{
	//method implementation
}

void item::addItem () 
{
	//method implementation	
}

void item::deleteItem () 
{
	//method implementation
}

void item::updateItem () 
{
	//method implementation
}



