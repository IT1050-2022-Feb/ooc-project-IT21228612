#include <iostream>
#include <cstring>
#include "user.h"

using namespace std ;

//class registeredCustomer implementation
class registeredCustomer : public user
 {
	private:
		char customerID[15] ;
		char password[15] ;
		
	public:
		registeredCustomer() ; // default constructor
		
		// overloaded constructor
		registeredCustomer (char name[] , char address[] , char gender[] , char phone[] , char email[], char RCcustomerID[] , char RCpassword[] )
		: user (name , address , gender , phone , email) ;
		
		void assignCustomerID (char cusID[]) ;
		void assignPassword (char pw[]) ;
		void printDetails () ;
		void login (char cusID[], char pw[]) ;
		~registeredCustomer() ; //destructor
};



