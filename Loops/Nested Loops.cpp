//
//nested loops - a loop contained within another loop
//
//preprocessor directive
#include <iostream>
using namespace std;

//main program
int main()
{
	int length = 0, row = 0, column = 0;

	cout << "Enter square edge length: ";
	cin >> length;

	for (row = 1; row <= length; row++)
	{
		cout << "\n";
		for (column = 1; column <= length; column++)
		{
			cout << "x ";
		}
	}
	cout << endl;

	return 0;
}