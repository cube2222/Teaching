#include <iostream>

using namespace std;

int main()
{
	int Number;
	cin >> Number;

	int LastNum = Number % 10;
	Number /= 10;

	while (Number > 0)
	{
		if (Number % 10 < LastNum)
		{
			LastNum = Number % 10;
			Number /= 10;
		}	
		else
		{
			cout << "Not sorted" << endl;
			system("pause");
			return 0;
		}
	}
	cout << "Sorted" << endl;
	system("pause");
	return 0;
}