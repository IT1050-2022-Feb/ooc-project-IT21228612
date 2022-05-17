#include <iostream>
#include <cstring>
#define SIZE 1
#include "feedback.h"
#include "order.h"

using namespace std ;

//class item implementation
class item {
	private:
		
		order *O[SIZE] ;
		feedback *F[SIZE] ;
		string itemID ;
		string name ;
		string supplierID ;
		string description ;
		float price ;
		int quantity ;
		
	public:
		item() ; // default constructor
		item(string IID , string Iname ,string SID , string des , float Iprice , int IQty , string FeedbackID , int Rating ) ; // overloaded constructor
		void assignDetails(string IID , string Iname ,string SID , string des , float Iprice , int IQty )  ;
		void addOrders(order *od) ;
		void printDetails () ;
		void addItem () ;
		void deleteItem () ;
		void updateItem () ;
		~item() ; //destructor
};


