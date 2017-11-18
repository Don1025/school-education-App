#include <iostream>
#include <string>

using namespace std;
// int menuch02(); //individual example program function
int main()
{
		int selection = 1; //set selection equal to 1 initially
		while (selection != 0) //begin while loop- condition while selection not equal to 0
		{
			system("CLS"); //clear window
			cout << "C++ Examples \n"; //display text title
			

			printf("1. C++ Chapter 2 Examples \n"); //display text as option
			printf("2. C++ Chapter 3 Examples \n"); //display text as option
			printf("3. C++ Chapter 4 Examples \n"); //display text as option

			cout << "Enter a number: 1-3 or 0 (zero) to exit. \n"; //prompt user to choose and hit return
			cin >> selection; //user choice assigned to selection

			if (selection == 1) //if user chooses second option
			{
				system("CLS"); //clear window
				//	mainDate(); //call name date function
				//	menuch02(); //call indiviual example program function
			}
			else if (selection == 2) //if user chooses third option
			{
				system("CLS"); //clear window
				//	mainDate(); //call name date function
				//	mainch0300(); //call indiviual example program function
			}
			else if (selection == 3) //if user chooses third option
			{
				system("CLS"); //clear window
				//	mainDate(); //call name date function
				//	mainch0400(); //call indiviual example program function
			}
		}
	return 0; //return 0		
}