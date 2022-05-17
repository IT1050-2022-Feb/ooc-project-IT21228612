#include <iostream>
#include <cstring>
#include "order.h"

using namespace std ;

order::order() // default constructor  implementation
{
	D = new delivery() ;
	P = new payment() ;
	orderID = "" ;
	date = "" ;
	sum = 0 ;
	shippingFee = 0;
	
}

// overloaded constructor implementation
order::order(string OID, string Odate , float Osum , float ShFee, string payID , string PM , float payAmt, string delID , string Ddate , string Dtime  )  
{
	D = new delivery (delID , Ddate , Dtime ) ;
	P = new payment(payID , PM , payAmt) ;
	orderID = OID ;
	date = Odate ;
	sum = 0 ;
	shippingFee = 0;
	
}

order::~order() //destructor
{
	
}


void order::assignDetails(string OID, string Odate , float Osum , float ShFee )
{
	//method implementation
}

void addItems (item *it)
{
	//method implementation
}

void addUser(user *usr) 
{
	//method implementation
}

void order::printDetails () 
{
	//method implementation
}

float order::calcTotal () 
{
	//method implementation
}

void order::deleteOrder () 
{
	//method implementation
}

void order::viewOrderStatus () 
{
	//method implementation
}



