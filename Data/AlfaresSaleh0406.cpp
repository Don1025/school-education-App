#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main0406()
{
	srand(time(0));

	for (int i = 1; i <= 10; i++)
	{
		int d1 = rand() % 6 + 1;
		int d2 = rand() % 6 + 1;
		cout << d1 << " " << d2 << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}