#include <iostream>
#include <cstring>
#include "feedback.h"

using namespace std ;

feedback::feedback() // default constructor  implementation
{	
	feedbackID = "" ;
	rating = 0 ;
	
}

feedback::feedback (string FeedbackID , int Rating)  // overloaded constructor implementation
{
	
	feedbackID = FeedbackID ;
	rating = Rating ;
	
}

feedback::~feedback() //destructor
{
	
}

void feedback::assignDetails (string FeedbackID , int Rating)
{
	//method implementation
}

void feedback::printDetails() 
{
	//method implementation
}

void feedback::deleteFeedback () 
{
	//method implementation
}

void feedback::editFeedback () 
{
	//method implementation
}



