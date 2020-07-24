//
//LCV loop type
//
//preprocessor directive
#include <iostream>
using namespace std;

//main program
int main()
{
	//declare variable
	char symbol('0');
	int count(1);

	//promt user to enter symbol and read in
	cout << "Enter symbol: ";
	cin >> symbol;

	//while loop print symbol 10 times using LCV
	while (count < 10)
	{
		cout << symbol << endl;
		count++;
	}

	//statement saying this problem is done
	cout << "\nDONE!"
		<< endl << endl;

	return 0;			//exit program
}