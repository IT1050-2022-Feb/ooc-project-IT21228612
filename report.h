#include <iostream>
#include <cstring>
#include "order.h"
#include "item.h"

using namespace std ;

//class report implementation
class report 
{
	private:
		string reportID ;
		string date ;
		string time ;
		
	public:
		report() ; // default constructor
		report (string repID, string Rdate, string Rtime ) ; // overloaded constructor
		void assignDetails(string repID, string Rdate, string Rtime ) ;
		void printDetails () ;
		void generateItemReport (item *ITM) ;
		void generateOrdersReport (order * ORD) ;
		void authorizeReport () ;
		~report() ; //destructor
};



