#include <iostream>
#include <cstring>


using namespace std ;

//class payment implementation
class payment {
	private:
		string paymentID ;
		string paymentMethod ;
		float paymentAmount ;
		
	public:
		payment() ; // default constructor
		payment(string payID , string PM , float payAmt ) ; // overloaded constructor
		void assignDetails(string payID , string PM , float payAmt ) ;
		void printDetails () ;
		void confirmPayment () ;
		void authorizePayment () ;
		~payment() ; //destructor
};


