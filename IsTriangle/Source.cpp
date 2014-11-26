#include <iostream>

using namespace std;

int main()
{
	int Number, TriangleNumber = 0;
	cin >> Number;
	for (int i = 1; TriangleNumber <= Number; i++)
	{
		TriangleNumber += i;
		if (TriangleNumber == Number)
		{
			cout << "Number is triangle" << endl;
			system("pause");
			return 0;
		}
	}
	cout << "Number isn't triangle" << endl;
	system("pause");
	return 0;
}