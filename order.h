#include <iostream>
#include <cstring>
#include "payment.h"
#include "delivery.h"
#include "item.h"
#include "user.h"
#define SIZE 10

using namespace std ;

//class order implementation
class order {
	private:
		user *U ;
		delivery *D ;
		payment *P ;
		item *I[SIZE] ;
		string orderID ;
		string date ;
		float sum ;
		float shippingFee ;
		
	public:
		order() ; // default constructor
		
		// overloaded constructor
		order(string OID, string Odate , float Osum , float ShFee, string payID , string PM , float payAmt, string delID , string Ddate , string Dtime  ) ;  
		
		void assignDetails(string OID, string Odate , float Osum , float ShFee ) ;
		void addItems (item *it) ;
		void addUser(user *usr) ;
		void printDetails () ;
		float calcTotal () ;
		void deleteOrder () ;
		void viewOrderStatus () ;
		~order() ; //destructor
};


