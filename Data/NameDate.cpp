//Name and Date Function

#include <iostream> //include iostream library
#include <ctime> //include ctime library
// #include <stdio.h> 
// #include <time.h> 

using namespace std;

int mainDate() //integer returns 0, mainDate
{
	time_t now = time(0);	 // current date/time based on current system
	char* dt = ctime(&now);	 // convert now to string form

//	time_t current_time;
//	char* c_time_string;



	cout << "Lane Miller ES115 C++: " << dt << endl; //display text, current date and time
//	(void) printf("%A", c_time_string);

	return 0; //return 0

	
//	%a  /* Abbreviated weekday */
//	%A  /* Full weekday */
//		%b  /* Abbreviated month */
//		%b  /* Full month */
//		%c  /* Full date and time */
//		%d  /* Day of the month (1-31) */
//		%H  /* Hour (24 hour clock) */
//		%I  /* Hour (12 hour clock) */
//		%j  /* Day of the year (1-366)*/
//		%m  /* Month (1-12) */
//		%M  /* Minute (0-59) */
//		%p  /* AM/PM for 12 hour clock */
//		%S  /* Second (0-60) */
//		%U  /* Week number from Sunday */
//		%w  /* Weekday (0-6) from Sunday */
//		%W  /* Week number from Monday */
//		%x  /* Full date */
//		%X  /* Full time of day */
//		%y  /* Year without century */
//		%Y  /* Year with century */
//		%Z  /* Time zone */
//		%%  /* Print a % character */

}




//Name and Date Function
#define _CRT_SECURE_NO_WARNINGS  // supress cTime error
#include <iostream> //include iostream library
#include <string>
#include <stdio.h> 
#include <time.h> 

using namespace std;

int mainDate() //integer returns 0, mainDate
{
	time_t now = time(0);	 // current date/time based on current system
	char* dt = ctime(&now);	 // convert now to string form

	cout << "Lane Miller ES115 C++: " << dt << endl; //display text, current date and time
//	(void) printf("%A", c_time_string);

	return 0; //return 0

}