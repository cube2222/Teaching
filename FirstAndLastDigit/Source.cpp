#include <iostream>

using namespace std;

int main()
{
	int Number;
	cin >> Number;
	cout << "The last digit is: " << Number % 10 << endl;
	while (Number > 10)
	{
		Number = Number / 10;
	}
	cout << "The first digit is: " << Number << endl;

	system("pause");
}