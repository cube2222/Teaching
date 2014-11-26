//Jakub Martin Zadanie2
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	int Number, NewNumber;
	cin >> Number;
	NewNumber = 0;
	if (Number == 0);
	else
	{
		while (Number > 0)
		{
			NewNumber *= 10;
			NewNumber += Number % 10;
			Number /= 10;
		}
	}
	cout << NewNumber << endl;

	system("PAUSE");
	return 0;
}