#include <iostream>

using namespace std;

int main()
{
	int Number, Divider = 2;
	cin >> Number;
	while (Number != 1)
	{
		if (Number % Divider == 0)
		{
			Number = Number / Divider;
			cout << Divider << endl;
		}
		else
		{
			Divider++;
		}
	}

	system("pause");
}