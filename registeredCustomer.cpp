#include <iostream>
#include <cstring>
#include "registeredCustomer.h"
#include "user.h"

using namespace std ;

registeredCustomer::registeredCustomer() // default constructor  implementation
{
	
	strcpy(customerID , "") ;
	strcpy(password , "") ;
	
}

// overloaded constructor implementation
registeredCustomer::registeredCustomer (char name[] , char address[] , char gender[] , char phone[] , char email[], char RCcustomerID[] , char RCpassword[] )
	: user (name , address , gender , phone , email) 
{
	
	strcpy(customerID , RCcustomerID) ;
	strcpy(password , RCpassword) ;
}

registeredCustomer::~registeredCustomer() //destructor
{
	
}


void registeredCustomer::assignCustomerID (char cusID[]) 
{
	//method implementation
}

void registeredCustomer::assignPassword (char pw[]) 
{
	//method implementation
}

void registeredCustomer::printDetails () 
{
	//method implementation
}

void registeredCustomer::login (char cusID[], char pw[]) 
{
	//method implementation
}


