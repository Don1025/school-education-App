#include <iostream>
#include <string>

using namespace std;

int main0204()
{
	cout << "Enter your first name: ";
	string first;
	cin >> first;
	cout << "Enter your significant other's first name: ";
	string second;
	cin >> second;
	string initials = first.substr(0, 1)
		+ "&" + second.substr(0, 1);
	cout << initials << endl;
	system("pause");
	return 0;
}