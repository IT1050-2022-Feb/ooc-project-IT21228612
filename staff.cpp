#include <iostream>
#include <cstring>

#include "staff.h"
#include "user.h"

using namespace std ;

	staff::staff() // default constructor  implementation
{
	strcpy(empID , "") ;
	strcpy(password , "") ;	
}

// overloaded constructor implementation
staff::staff (char name[] , char address[] , char gender[] , char phone[] , char email[], char EmpID[] , char Password[] )
	: user (name , address , gender , phone , email) 
{

	strcpy(empID , EmpID) ;
	strcpy(password , Password) ;
}

staff::~staff() //destructor
{
	
}

		
void staff::assignEmpID (char EmployeeID[]) 
{
	//method implementation
}

void staff::assignPassword (char Pass[]) 
{
	//method implementation
}

void staff::printDetails () 
{
	//method implementation
}

void staff::login (char EmployeeID[], char Pass[]) 
{
	//method implementation
}



