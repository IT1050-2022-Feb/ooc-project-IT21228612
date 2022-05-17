#include <iostream>
#include <cstring>
#include "user.h"

using namespace std ; 

user::user() // default constructor  implementation
{
	
	strcpy(Name , "") ;
	strcpy(Address , "") ;
	strcpy(Gender , "") ;
	strcpy(Phone , "") ;
	strcpy(Email , "") ;
	
	cout<<"Default constructor ran successfully" << endl << endl ;
	
}

user::user(char name[] , char address[] , char gender[] , char phone[] , char email[]) // overloaded constructor implementation
{
	
	strcpy(Name , name) ;
	strcpy(Address , address) ;
	strcpy(Gender , gender) ;
	strcpy(Phone , phone) ;
	strcpy(Email , email) ;
	cout<<"Overloaded constructor ran successfully" << endl << endl ;	
}

user::~user() //destructor
{
	
}

void addOrder (order * ODR)
{
	//method implementation
}

void user::assignDetails (char Uname[] , char Uaddress[] , char Ugender[] , char Uphone[] , char Uemail[]) 
{
	//method implementation
}

void user::printDetails () 
{
	//method implementation
}

void user::registerUser () 
{
	//method implementation
}



