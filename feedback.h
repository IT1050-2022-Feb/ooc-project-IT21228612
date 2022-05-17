#include <iostream>
#include <cstring>

using namespace std ;

//class feedback implementation
class feedback 
{
	private:
		string feedbackID ;
		int rating ;
		
		
	public:
		feedback() ; // default constructor
		feedback (string FeedbackID , int Rating) ; // overloaded constructor
		void assignDetails (string FeedbackID , int Rating) ;
		void printDetails() ;
		void deleteFeedback () ;
		void editFeedback () ;
		~feedback() ; //destructor
};


