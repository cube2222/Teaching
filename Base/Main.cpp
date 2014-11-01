#include <iostream> //U¿ywamy biblioteki iostream ze Standard Library

using namespace std; //Orzekamy chêæ u¿ywania namespace std;

int main() //Punkt wejœciowy programu
{
	int a; //Declare variable - value undefined - wartoœæ niezdefiniowana
	a = 5; //Initialize variable - value defined - wartoœæ zdefiniowana = 5
	bool b = 0; //Declare and Initialize variable - value defined - wartoœæ zdefiniowana = 0

	std::cout << a << std::endl; //U¿ywamy cout'u z namespace std

	cout << b << endl; //U¿ywamy cout'u z namespace std
	
	return 0; //Zwracamy kod 0
}

