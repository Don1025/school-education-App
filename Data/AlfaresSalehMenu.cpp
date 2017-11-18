#include <iostream>//include iostream library
#include <cstdlib> //include cstdlib library
using namespace std; //identifier


int main()  //Main Body Program 
{
	int selection = 1; //set selection equal to 1 initially 

	while (selection != 0) //begin while loop condition while selection not equal to 0
	{
		system("CLS"); //clear window


		printf("1. Ch1 C++ Examples \n"); //display text as option
		printf("2. Ch2 C++ Examples \n"); //display text as option
		printf("3. Ch3 C++ Examples \n"); //display text as option
		printf("4. Ch4 C++ Examples \n"); //display text as option
		printf("5. Ch5 C++ Examples \n"); //display text as option
		printf("6. Ch6 C++ Examples \n"); //display text as option
		printf("7. C++ Extra \n");       //display text as option
		printf("0. Exit Program \n");    //display text as option


		cout << "Enter a number (1-7) or 0 (zero) to exit, and press return. \n"; //prompt user to choose and hit return
		cin >> selection; //user choice assigned to selection 



	}
	system("pause");
	return 0; //return 0
}