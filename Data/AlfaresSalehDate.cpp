//Name and Date Function

#include <iostream> //include iostream library
#include <ctime> //include ctime library

using namespace std;

int mainDate() //integer returns 0, mainDate
{
	time_t now = time(0);	 // current date/time based on current system

	char* dt = ctime(&now);	 // convert now to string form

	cout << "AlfaresSaleh ES115 C++: " << dt << endl; //display text, current date and time

	system("pause");
	return 0; //return 0
}