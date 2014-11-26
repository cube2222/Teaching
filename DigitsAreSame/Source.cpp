//Jakub Martin Zadanie1
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	int Number, LastNumber;
	bool bIsSame = true;
	cin >> Number;
	LastNumber = Number % 10;
	Number /= 10;
	while (Number > 0)
	{
		if (Number % 10 == LastNumber)
		{
			Number /= 10;
		}
		else
		{
			bIsSame = false;
			break;
		}
	}
	if (bIsSame)
		cout << "Sa takie same" << endl;
	else
		cout << "Nie sa takie same" << endl;

	system("PAUSE");
	return 0;
}