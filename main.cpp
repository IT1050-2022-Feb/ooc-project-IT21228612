#include <iostream>
#include <cstring>

#include "delivery.h"
#include "feedback.h"
#include "item.h"
#include "order.h"
#include "payment.h"
#include "registeredCustomer.h"
#include "staff.h"
#include "user.h"
#include "report.h"


int main () // main program
{
	delivery del1 ; //object creation using default constructor
	delivery del2 ("DEL0000001" , "2022.05.18" , "08:45") ; //object creation using overloaded constructor
	
	
	feedback feed1 ; //object creation using default constructor
	feedback feed2 ("FB00000001" , 4 ) ; //object creation using overloaded constructor	
	
	
	item item1 ; //object creation using default constructor
	//object creation using overloaded constructor
	item *item2 ;
	item2 = new item ("IT00000001", "Cap" , "SUP0000001" , "trendy cap. suitable for teenagers." , 5.75 , 100,"FB00000001" , 4 ) ; 
	
		
	order odr1 ; //object creation using default constructor
	order *odr2 ;
	//object creation using overloaded constructor
	odr2 = new order ("ODR0000001" , "2022.04.30" , 20.50 , 1.99 , "PID0000001" , "Card" , 15.35, "DEL0000001" , "2022.05.18" , "08:45") ; 
	
	
	payment pay1 ; //object creation using default constructor
	payment pay2 ("PID0000001" , "Card" , 15.35) ; //object creation using overloaded constructor
	
	
	registeredCustomer customer1 ; //object creation using default constructor
	//object creation using overloaded constructor
	registeredCustomer customer2 ("Ravindu Dissanayake" , "05 , Galwala road , Elpitiya" , "Male" , "0767245612", "Ravi@yahoo.com" , "CUS0000001" , "Ravidis#2000") ;
	
	
	staff emp1;  //object creation using default constructor
	//object creation using overloaded constructor
	staff emp2 ("Yasas Ranaweera" , "07 , Udupila road , Gampaha" , "Male" , "0764337612", "yasas@yahoo.com" , "EMP0000001" , "Yasa@2001#") ;
	
	
	user user1 ; //object creation using default constructor
	//object creation using overloaded constructor
	user user2 ("Jeewantha" , "241/5 , kekirideniya road , kaduwela" , "Male" , "0719518688" , "jeeewantha123@gmail.com") ; 
	
	
	report r1; //object creation using default constructor
	report *r2 = new report ("RPT0000001" , "2022.02.14" , "10:45") ;  //object creation using overloaded constructor
	
	return 0 ;
}
