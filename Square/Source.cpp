//Jakub Martin Zadanie3
#include <cstdlib>
#include <iostream>

using namespace std;

void DivideThroughAllDividers(int& NumA, int& NumB);

int main(int argc, char *argv[])
{
	int X, Y;
	cin >> X;
	cin >> Y;
	if (X == 0 || Y == 0)
	{
		cout << "Prostok¹t nie istnieje." << endl;
		system("PAUSE");
		return 0;
	}
	if (X > Y)
	{
		if (X % Y == 0)
		{
			cout << X / Y << endl;
			system("PAUSE");
			return 0;
		}
		else
		{
			DivideThroughAllDividers(X, Y);
			cout << X * Y << endl;
		}
	}
	else
	{
		if (Y % X == 0)
		{
			cout << Y / X << endl;
			system("PAUSE");
			return 0;
		}
		else
		{
			DivideThroughAllDividers(X, Y);
			cout << X * Y << endl;

		}
	}
	system("PAUSE");
	return 0;
}

void DivideThroughAllDividers(int& NumA, int& NumB)
{
	for (int i = 2; i <= NumA && i <= NumB;)
	{
		if ((NumA % i == 0) && (NumB % i == 0))
		{
			NumA /= i;
			NumB /= i;
		}
		else
			i++;
	}
}