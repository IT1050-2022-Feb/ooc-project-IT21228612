
#include <iostream>
#include <cstring>
#include "user.h"

using namespace std ;

//class staff implementation
class staff : public user
 {
	private:
		char empID[15] ;
		char password[15] ;
		
	public:
		staff() ; // default constructor
		
		// overloaded constructor
		staff (char name[] , char address[] , char gender[] , char phone[] , char email[], char EmpID[] , char Password[] )
		: user (name , address , gender , phone , email) ;

		void assignEmpID (char EmployeeID[]) ;
		void assignPassword (char Pass[]) ;
		void printDetails () ;
		void login (char EmployeeID[], char Pass[]) ;
		~staff() ; //destructor
};




