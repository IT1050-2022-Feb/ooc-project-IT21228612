
#include <iostream>
#include <cstring>
#include "order.h"
#define SIZE 10

using namespace std ;

//class user implementation
class user {
	protected:
		order * odr[SIZE] ;
		char Name[30] ;
		char Address[80] ;
		char Gender[6] ;
		char Phone[10] ;
		char Email[25] ;
		
	public:
		user() ; // default constructor
		user (char name[] , char address[] , char gender[] , char phone[] , char email[]) ; // overloaded constructor
		void assignDetails (char Uname[] , char Uaddress[] , char Ugender[] , char Uphone[] , char Uemail[]) ;
		void addOrder (order * ODR) ;
		virtual void printDetails () ;
		void registerUser () ;
		~user() ; //destructor
};



