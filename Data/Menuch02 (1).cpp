#include <iostream>
#include <string>

using namespace std;
// int exch0201(); //individual example program function
// int exch0202(); //individual example program function
int menuch02()
{
		int selection = 1; //set selection equal to 1 initially
		while (selection != 0) //begin while loop- condition while selection not equal to 0
		{
			system("CLS"); //clear window
			cout << "C++ Examples \n"; //display text title
			

			printf("1. Chapter02 Exampl01 \n"); //display text as option
			printf("2. Chapter02 Exampl02 \n"); //display text as option
			printf("3. Chapter02 Exampl03 \n"); //display text as option

			cout << "Enter a number: 1-3 or 0 (zero) to exit. \n"; //prompt user to choose and hit return
			cin >> selection; //user choice assigned to selection

			if (selection == 1) //if user chooses second option
			{
				system("CLS"); //clear window
				//	mainDate(); //call name date function
				//	exch0201(); //call indiviual example program function
			}
			else if (selection == 2) //if user chooses third option
			{
				system("CLS"); //clear window
				//	mainDate(); //call name date function
				//	exch0202(); //call indiviual example program function
			}
			else if (selection == 3) //if user chooses third option
			{
				system("CLS"); //clear window
				//	mainDate(); //call name date function
				//	exch0203(); //call indiviual example program function
			}
		}
	return 0; //return 0
}