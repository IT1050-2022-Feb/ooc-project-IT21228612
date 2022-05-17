#include <iostream>
#include <cstring>
#include "payment.h"

using namespace std ;

payment::payment() // default constructor  implementation
{
	paymentID = "" ;
	paymentMethod = "" ;
	paymentAmount = 0 ;
	
}

payment::payment(string payID , string PM , float payAmt ) // overloaded constructor implementation
{
	
	paymentID = payID ;
	paymentMethod = PM ;
	paymentAmount = payAmt ;
	
}

payment::~payment() //destructor
{
	
}

void payment::assignDetails(string payID , string PM , float payAmt )
{
	//method implementation
}

void payment::printDetails () 
{
	//method implementation
}

void payment::confirmPayment () 
{
	//method implementation
}

void payment::authorizePayment () 
{
	//method implementation
}




