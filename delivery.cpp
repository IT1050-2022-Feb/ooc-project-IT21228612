#include <iostream>
#include <cstring>
#include "delivery.h"

using namespace std ;


delivery::delivery() // default constructor  implementation
{
	deliveryID = "" ;
	date = "" ;
	time = "" ;	
}

delivery::delivery (string delID , string Ddate , string Dtime )  // overloaded constructor implementation
{	
	deliveryID = delID ;
	date = Ddate ;
	time = Dtime ;	
}

delivery::~delivery() //destructor
{
	
}

void delivery::assignDetails (string delID , string Ddate , string Dtime ) 
{
	//method implementation
}

void delivery::printDetails () 
{
	//method implementation
}

void delivery::assignDeliveryPerson () 
{
	//method implementation
}

void delivery::viewDeliveryStatus () 
{
	//method implementation
}



