#include <iostream>
#include <cstring>
#include "report.h"

using namespace std ;

report::report() // default constructor  implementation 
{
	reportID = "" ;
	date = "" ;
	time = "" ;
	
}

report::report(string repID, string Rdate, string Rtime ) // overloaded constructor implementation
{
	
	reportID = repID ;
	date = Rdate ;
	time = Rtime ;
	
}

report::~report() //destructor
{
	
}
		
void assignDetails(string repID, string Rdate, string Rtime )
{
	//method implementation
}

void printDetails () 
{
	//method implementation
}

void generateItemReport (item *ITM)
{
	//method implementation
}

void generateOrdersReport (order * ORD)
{
	//method implementation
}

void authorizeReport () 
{
	//method implementation
}


