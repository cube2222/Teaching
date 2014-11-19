#include <iostream>

using namespace std;

int main()
{
	int Number, Sum = 0;

	cin >> Number;

	while (Number > 0)
	{
		Sum += Number % 10;
		Number /= 10;
	}
	cout << Sum << endl;

	system("pause");
}