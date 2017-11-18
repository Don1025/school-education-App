//Main C++ Menu

#include <ctime> //include ctime library
#include <fstream> //include fstream library
#include <iostream>//include iostream library
#include <cstdlib> //include cstdlib library
using namespace std; //identifier

					 //Function Declarations- declares all functions that are called in program
int mainDate(); //name date function

void Chapter1Ex(); //chapter menu void function
int main0101(); //individual example program function

void Chapter2Ex(); //chapter menu void function
int main0201(); //individual example program function
int main0202(); //individual example program function
int main0203(); //individual example program function

void Chapter3Ex(); //chapter menu void function
int main0301(); //individual example program function
int main0302(); //individual example program function
int main0303(); //individual example program function


void Chapter4Ex(); //chapter menu void function
int main0401(); //individual example program function
int main0402(); //individual example program function
int main0403(); //individual example program function
int main0404(); //individual example program function
int main0405(); //individual example program function
int main0406(); //individual example program function
int main0407(); //individual example program function
int main0411(); //individual example program function


void Chapter5Ex(); //chapter menu void function
int main0501(); //individual example program function
int main0502(); //individual example program function
int main0503(); //individual example program function
int main0504(); //individual example program function


void Chapter6Ex(); //chapter menu void function
int main0601(); //individual example program function
int main0602(); //individual example program function
int main0603(); //individual example program function

				/*void Chapter7Ex(); //chapter menu void function
				int main0701(); //individual example program function
				int main0703(); //individual example program function
				int main0706(); //individual example program function
				int main0707(); //individual example program function
				int main0708(); //individual example program function
				int main0709(); //individual example program function
				int main0710(); //individual example program function
				int main0712(); //individual example program function
				int main0713(); //individual example program function
				*/
				/*void ChapterExtra(); //chapter menu void function
				int mainextra(); //individual example program function
				*/


int main()	//Main Body Program
{
	int selection = 1; //set selection equal to 1 initially

	while (selection != 0) //begin while loop- condition while selection not equal to 0
	{
		system("CLS"); //clear window

		mainDate(); //call name date function

		printf("1. Ch1 C++ Examples \n"); //display text as option
		printf("2. Ch2 C++ Examples \n"); //display text as option
		printf("3. Ch3 C++ Examples \n"); //display text as option
		printf("4. Ch4 C++ Examples \n"); //display text as option
		printf("5. Ch5 C++ Examples \n"); //display text as option
		printf("6. Ch6 C++ Examples \n"); //display text as option
										  //printf("7. C++ Extra \n");        //display text as option
		printf("0. Exit Program \n");     //display text as option


		cout << "Enter a number (1-8) or 0 (zero) to exit, and press return. \n"; //prompt user to choose and hit return
		cin >> selection; //user choice assigned to selection

		if (selection == 1) //if user chooses first option
		{
			mainDate(); //call name date function
			Chapter1Ex(); //call chapter menu function
		}
		else if (selection == 2) //if user chooses second option
		{
			mainDate(); //call name date function
			Chapter2Ex(); //call chapter menu function
		}
		else if (selection == 3) //if user chooses third option
		{
			mainDate(); //call name date function
			Chapter3Ex(); //call chapter menu function
		}
		else if (selection == 4) //if user chooses fourth option
		{
			mainDate(); //call name date function
			Chapter4Ex(); //call chapter menu function
		}
		else if (selection == 5) //if user chooses fifth option
		{
			mainDate(); //call name date function
			Chapter5Ex(); //call chapter menu function
		}
		else if (selection == 6) //if user chooses sixth option
		{
			mainDate(); //call name date function
			Chapter6Ex(); //call chapter menu function
		}
		/*else if (selection == 7) //if user chooses seventh option
		{
		mainDate(); //call name date function
		Chapter7Ex(); //call chapter menu function
		}
		else if (selection ==8) //if user chooses eighth option
		{
		mainDate(); //call name date function
		ChapterExtra(); //call chapter menu function
		}
		*/
	}
	system("pause");
	return 0; //return 0
}

//Chapter Void Function Definitions
void Chapter1Ex() //chapter menu void function definition
{

	int selection = 1; //set selection equal to 1 initially
	while (selection != 0) //begin while loop- condition while selection not equal to 0
	{

		system("CLS"); //clear window
		cout << "Chapter 1 Examples \n"; //display text title
		mainDate(); //call name date function

		printf("1. C++ Display 1.08 \n"); //display text as option
										  //printf("2. C++ Display 1.10 \n"); //display text as option

		cout << "Enter a number: 1,2 or 0 (zero) to exit. \n"; //prompt user to choose and hit return
		cin >> selection; //user choice assigned to selection

		if (selection == 1) //if user chooses first option
		{
			system("CLS"); //clear window
			mainDate(); //call name date function
			main0101(); //call indiviual example program function
		}



	}
}

void Chapter2Ex() //chapter menu void function definition
{
	int selection = 1; //set selection equal to 1 initially
	while (selection != 0) //begin while loop- condition while selection not equal to 0
	{

		system("CLS"); //clear window
		cout << "Chapter 2 Examples \n"; //display text title
		mainDate(); //call name date function

		printf("1. C++ Display 2.01 \n"); //display text as option
		printf("2. C++ Display 2.02 \n"); //display text as option
		printf("3. C++ Display 2.03 \n"); //display text as option
										  //printf("4. C++ Display 2.07 \n"); //display text as option
										  //printf("5. C++ Display 2.11 \n"); //display text as option
										  //printf("6. C++ Display 2.14 \n"); //display text as option 
										  //printf("7. C++ Display 2.15 \n"); //display text as option
										  //printf("8. C++ Display 2.16 \n"); //display text as option

		cout << "Enter a number: 1-8 or 0 (zero) to exit. \n"; //prompt user to choose and hit return
		cin >> selection; //user choice assigned to selection

		if (selection == 1) //if user chooses first option
		{
			system("CLS"); //clear window
			mainDate(); //call name date function
			main0201(); //call indiviual example program function
		}
		else if (selection == 2) //if user chooses second option
		{
			system("CLS"); //clear window
			mainDate(); //call name date function
			main0202(); //call indiviual example program function
		}
		else if (selection == 3) //if user chooses third option
		{
			system("CLS"); //clear window
			mainDate(); //call name date function
			main0203(); //call indiviual example program function
		}
		/*else if (selection == 4) //if user chooses fourth option
		{
		system ("CLS"); //clear window
		mainDate(); //call name date function
		main0207(); //call indiviual example program function
		}
		else if (selection == 5) //if user chooses fifth option
		{
		system ("CLS"); //clear window
		mainDate(); //call name date function
		main0211(); //call indiviual example program function
		}
		else if (selection == 6) //if user chooses sixth option
		{
		system ("CLS"); //clear window
		mainDate(); //call name date function
		main0214(); //call indiviual example program function
		}
		else if (selection == 7) //if user chooses seventh option
		{
		system ("CLS"); //clear window
		mainDate(); //call name date function
		main0215(); //call indiviual example program function
		}
		else if (selection == 8) //if user chooses eighth option
		{
		system ("CLS"); //clear window
		mainDate(); //call name date function
		main0216(); //call indiviual example program function
		}
		*/

	}
}

void Chapter3Ex() //chapter menu void function definition
{
	int selection = 1; //set selection equal to 1 initially
	while (selection != 0) //begin while loop- condition while selection not equal to 0
	{

		system("CLS"); //clear window
		cout << "Chapter 3 Examples \n"; //display text title
		mainDate(); //call name date function

		printf("1. C++ Display 3.01 \n"); //display text as option
		printf("2. C++ Display 3.02 \n"); //display text as option
		printf("3. C++ Display 3.03 \n"); //display text as option
										  //printf("4. C++ Display 3.07 \n"); //display text as option
										  //printf("5. C++ Display 3.08 \n"); //display text as option
										  //printf("6. C++ Display 3.10 \n"); //display text as option
										  //printf("7. C++ Display 3.12 \n"); //display text as option
										  //printf("8. C++ Display 3.14 \n"); //display text as option

		cout << "Enter a number: 1-8 or 0 (zero) to exit. \n"; //prompt user to choose and hit return
		cin >> selection; //user choice assigned to selection

		if (selection == 1) //if user chooses first option
		{
			system("CLS"); //clear window
			mainDate(); //call name date function
			main0301(); //call indiviual example program function
		}
		else if (selection == 2) //if user chooses second option
		{
			system("CLS"); //clear window
			mainDate(); //call name date function
			main0302(); //call indiviual example program function
		}
		else if (selection == 3) //if user chooses third option
		{
			system("CLS"); //clear window
			mainDate(); //call name date function
			main0303(); //call indiviual example program function
		}
		/*else if (selection == 4) //if user chooses fourth option
		{
		system ("CLS"); //clear window
		mainDate(); //call name date function
		main0307(); //call indiviual example program function
		}
		else if (selection == 5) //if user chooses fifth option
		{
		system ("CLS"); //clear window
		mainDate(); //call name date function
		main0308(); //call indiviual example program function
		}
		else if (selection == 6) //if user chooses sixth option
		{
		system ("CLS"); //clear window
		mainDate(); //call name date function
		main0310(); //call indiviual example program function
		}
		else if (selection == 7) //if user chooses seventh option
		{
		system ("CLS"); //clear window
		mainDate(); //call name date function
		main0312(); //call indiviual example program function
		}
		else if (selection == 8) //if user chooses eighth option
		{
		system ("CLS"); //clear window
		mainDate(); //call name date function
		main0314(); //call indiviual example program function
		}
		*/

	}
}

void Chapter4Ex() //chapter menu void function definition
{
	int selection = 1; //set selection equal to 1 initially
	while (selection != 0) //begin while loop- condition while selection not equal to 0
	{

		system("CLS"); //clear window
		cout << "Chapter 4 Examples \n"; //display text title
		mainDate(); //call name date function

		printf("1. C++ Display 4.01 \n"); //display text as option
		printf("2. C++ Display 4.02 \n"); //display text as option
		printf("3. C++ Display 4.03 \n"); //display text as option
		printf("4. C++ Display 4.04 \n"); //display text as option
		printf("5. C++ Display 4.05 \n"); //display text as option
		printf("6. C++ Display 4.06 \n"); //display text as option
		printf("7. C++ Display 4.07 \n"); //display text as option
		printf("8. C++ Display 4.11 \n"); //display text as option
										  //printf("9. C++ Display 4.17 \n"); //display text as option
										  //printf("10. C++ Display 4.18 \n");//display text as option

		cout << "Enter a number: 1-10 or 0 (zero) to exit. \n"; //prompt user to choose and hit return
		cin >> selection; //user choice assigned to selection

		if (selection == 1)//if user chooses first option
		{
			system("CLS"); //clear window
			mainDate(); //call name date function
			main0401(); //call indiviual example program function
		}
		else if (selection == 2) //if user chooses second option
		{
			system("CLS"); //clear window
			mainDate(); //call name date function
			main0402(); //call indiviual example program function
		}
		else if (selection == 3) //if user chooses third option
		{
			system("CLS"); //clear window
			mainDate(); //call name date function
			main0403(); //call indiviual example program function
		}
		else if (selection == 4) //if user chooses fourth option
		{
			system("CLS"); //clear window
			mainDate(); //call name date function
			main0404();  //call indiviual example program function
		}
		else if (selection == 5) //if user chooses fifth option
		{
			system("CLS"); //clear window
			mainDate(); //call name date function
			main0405(); //call indiviual example program function
		}
		else if (selection == 6) //if user chooses sixth option
		{
			system("CLS"); //clear window
			mainDate(); //call name date function
			main0406(); //call indiviual example program function
		}
		else if (selection == 7) //if user chooses seventh option
		{
			system("CLS"); //clear window
			mainDate(); //call name date function
			main0407(); //call indiviual example program function
		}
		else if (selection == 8) //if user chooses eighth option
		{
			system("CLS"); //clear window
			mainDate(); //call name date function
			main0411(); //call indiviual example program function
		}
		/*else if (selection == 9) //if user chooses ninth option
		{
		system ("CLS"); //clear window
		mainDate(); //call name date function
		main0417(); //call indiviual example program function
		}
		else if (selection == 10) //if user chooses tenth option
		{
		system ("CLS"); //clear window
		mainDate(); //call name date function
		main0418(); //call indiviual example program function
		}
		*/
	}
}

void Chapter5Ex()  //chapter menu void function definition
{
	int selection = 1; //set selection equal to 1 initially
	while (selection != 0) //begin while loop- condition while selection not equal to 0
	{

		system("CLS"); //clear window
		cout << "Chapter 5 Examples \n"; //display text title
		mainDate(); //call name date function

		printf("1. C++ Display 5.01 \n"); //display text as option
		printf("2. C++ Display 5.02 \n"); //display text as option
		printf("3. C++ Display 5.03 \n"); //display text as option
										  //printf("4. C++ Display 5.07 \n"); //display text as option
										  //printf("5. C++ Display 5.08 \n"); //display text as option
										  //printf("6. C++ Display 5.09 \n"); //display text as option
										  //printf("7. C++ Display 5.10 \n"); //display text as option
										  //printf("8. C++ Display 5.11 \n"); //display text as option
										  //printf("9. C++ Display 5.12 \n"); //display text as option
										  //printf("10. C++ Display 5.13 \n");//display text as option

		cout << "Enter a number: 1-10 or 0 (zero) to exit. \n"; //prompt user to choose and hit return
		cin >> selection; //user choice assigned to selection

		if (selection == 1) //if user chooses first option
		{
			system("CLS"); //clear window
			mainDate(); //call name date function
			main0501(); //call indiviual example program function
		}
		else if (selection == 2) //if user chooses second option
		{
			system("CLS"); //clear window
			mainDate(); //call name date function
			main0502(); //call indiviual example program function
		}
		else if (selection == 3) //if user chooses third option
		{
			system("CLS"); //clear window
			mainDate(); //call name date function
			main0503(); //call indiviual example program function
		}
		else if (selection == 4) //if user chooses fourth option
		{
			system("CLS"); //clear window
			mainDate(); //call name date function
			main0504(); //call indiviual example program function
		}
		/*else if (selection == 5) //if user chooses fifth option
		{
		system ("CLS"); //clear window
		mainDate(); //call name date function
		main0508(); //call indiviual example program function
		}
		else if (selection == 6) //if user chooses sixth option
		{
		system ("CLS"); //clear window
		mainDate(); //call name date function
		main0509(); //call indiviual example program function
		}
		else if (selection == 7) //if user chooses seventh option
		{
		system ("CLS"); //clear window
		mainDate(); //call name date function
		main0510(); //call indiviual example program function
		}
		else if (selection == 8) //if user chooses eighth option
		{
		system ("CLS"); //clear window
		mainDate(); //call name date function
		main0511(); //call indiviual example program function
		}
		else if (selection == 9) //if user chooses ninth option
		{
		system ("CLS"); //clear window
		mainDate(); //call name date function
		main0512(); //call indiviual example program function
		}
		else if (selection == 10) //if user chooses tenth option
		{
		system ("CLS"); //clear window
		mainDate(); //call name date function
		main0513(); //call indiviual example program function
		}
		*/

	}
}

void Chapter6Ex() //chapter menu void function definition
{
	int selection = 1; //set selection equal to 1 initially
	while (selection != 0) //begin while loop- condition while selection not equal to 0
	{

		system("CLS"); //clear window
		cout << "Chapter 6 Examples \n"; //display text title
		mainDate(); //call name date function

		printf("1. C++ Display 6.01 \n"); //display text as option
		printf("2. C++ Display 6.02 \n"); //display text as option
		printf("3. C++ Display 6.03 \n"); //display text as option
										  //printf("4. C++ Display 6.07 \n"); //display text as option
										  //printf("5. C++ Display 6.08 \n"); //display text as option

		cout << "Enter a number: 1-5 or 0 (zero) to exit. \n"; //prompt user to choose and hit return
		cin >> selection; //user choice assigned to selection

		if (selection == 1) //if user chooses first option
		{
			system("CLS"); //clear window
			mainDate(); //call name date function
			main0601(); //call indiviual example program function
		}
		else if (selection == 2) //if user chooses second option
		{
			system("CLS"); //clear window
			mainDate(); //call name date function
			main0602(); //call indiviual example program function
		}
		else if (selection == 3) //if user chooses third option
		{
			system("CLS"); //clear window
			mainDate(); //call name date function
			main0603(); //call indiviual example program function
		}
		/*else if (selection == 4) //if user chooses fourth option
		{
		system ("CLS"); //clear window
		mainDate(); //call name date function
		main0607(); //call indiviual example program function
		}
		else if (selection == 5) //if user chooses fifth option
		{
		system ("CLS"); //clear window
		mainDate(); //call name date function
		main0608(); //call indiviual example program function
		}
		*/

	}
}

/*void Chapter7Ex() //chapter menu void function definition
{
int selection = 1; //set selection equal to 1 initially
while (selection != 0) //begin while loop- condition while selection not equal to 0
{

system ("CLS"); //clear window
cout << "Chapter 7 Examples \n"; //display text title
mainDate(); //call name date function

printf ("1. C++ Display 7.01 \n"); //display text as option
printf ("2. C++ Display 7.03 \n"); //display text as option
printf ("3. C++ Display 7.06 \n"); //display text as option
printf ("4. C++ Display 7.07 \n"); //display text as option
printf ("5. C++ Display 7.08 \n"); //display text as option
printf ("6. C++ Display 7.09 \n"); //display text as option
printf ("7. C++ Display 7.10 \n"); //display text as option
printf ("8. C++ Display 7.12 \n"); //display text as option
printf ("9. C++ Display 7.13 \n"); //display text as option

cout << "Enter a number: 1-9 or 0 (zero) to exit. \n"; //prompt user to choose and hit return
cin >> selection; //user choice assigned to selection

if (selection == 1) //if user chooses first option
{
system ("CLS"); //clear window
mainDate(); //call name date function
main0701(); //call indiviual example program function
}
else if (selection == 2) //if user chooses second option
{
system ("CLS"); //clear window
mainDate(); //call name date function
main0703(); //call indiviual example program function
}
else if (selection == 3) //if user chooses third option
{
system ("CLS"); //clear window
mainDate(); //call name date function
main0706(); //call indiviual example program function
}
else if (selection == 4) //if user chooses fourth option
{
system ("CLS"); //clear window
mainDate(); //call name date function
main0707(); //call indiviual example program function
}
else if (selection == 5) //if user chooses fifth option
{
system ("CLS"); //clear window
mainDate(); //call name date function
main0708(); //call indiviual example program function
}
else if (selection == 6) //if user chooses sixth option
{
system ("CLS"); //clear window
mainDate(); //call name date function
main0709(); //call indiviual example program function
}
else if (selection == 7) //if user chooses seventh option
{
system ("CLS"); //clear window
mainDate(); //call name date function
main0710();//call indiviual example program function
}
else if (selection == 8) //if user chooses eighth option
{
system ("CLS"); //clear window
mainDate(); //call name date function
main0712(); //call indiviual example program function
}
else if (selection == 9) //if user chooses ninth option
{
system ("CLS"); //clear window
mainDate(); //call name date function
main0713(); //call indiviual example program function
}


}
}
*/
/*void ChapterExtra() //chapter menu void function definition
{

int selection = 1; //set selection equal to 1 initially
while (selection != 0) //begin while loop- condition while selection not equal to 0
{

system ("CLS"); //clear window
cout << "C++ Extras \n"; //display text title
mainDate(); //call name date function

printf ("1. C++ Force Calculator Using Loop \n"); //display text as option

cout << "Enter a number: 1 or 0 (zero) to exit. \n"; //prompt user to choose and hit return
cin >> selection; //user choice assigned to selection

if (selection == 1) //if user chooses first option
{
system ("CLS"); //clear window
mainDate(); //call name date function
mainextra(); //call indiviual example program function
}


}
}*/