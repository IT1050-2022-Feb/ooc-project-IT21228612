#include <iostream>
#include <cstring>

using namespace std ;

//class delivery implementation
class delivery {
	private:
		string deliveryID ;
		string date ;
		string time ;
		
	public:
		delivery() ; // default constructor
		delivery (string delID , string Ddate , string Dtime ) ; // overloaded constructor
		void assignDetails (string delID , string Ddate , string Dtime ) ;
		void printDetails () ;
		void assignDeliveryPerson () ;
		void viewDeliveryStatus () ;
		~delivery() ; //destructor
};

