#include <iostream> //U�ywamy biblioteki iostream ze Standard Library

using namespace std; //Orzekamy ch�� u�ywania namespace std;

int main() //Punkt wej�ciowy programu
{
	int a; //Declare variable - value undefined - warto�� niezdefiniowana
	a = 5; //Initialize variable - value defined - warto�� zdefiniowana = 5
	bool b = 0; //Declare and Initialize variable - value defined - warto�� zdefiniowana = 0

	std::cout << a << std::endl; //U�ywamy cout'u z namespace std

	cout << b << endl; //U�ywamy cout'u z namespace std
	
	return 0; //Zwracamy kod 0
}

