//
//practice writing logical operations
//
//preprocessor directive
#include <iostream>
using namespace std;

//main program
int main()
{
	//Compute program verify that a variable x is between 18 an 60 inclusive
	//declare variable and initialize to 0
	float x = 0.0;

	//promt user to enter any number
	cout << "Enter a number: ";
	cin >> x;

	//statement x between 18 and 60
	cout << (x >= 18 && x <= 60) << endl;

	//let user know if the value x is between 18 and 60 or not
	cout << "\nIf appear 0 then it is not between 18 and 60"
		<< "\nIf appear 1 then it is between 18 and 60"
		<< endl;

	//statement saying the program is done
	cout << "\nDONE!" << endl;

	//write stament which is true i x is not in the range [25-30]
	cout << (x < 25 || x > 30) << endl;
	cout << !(x >= 25 && x <= 30) << endl;

	return 0;				//exit program
}