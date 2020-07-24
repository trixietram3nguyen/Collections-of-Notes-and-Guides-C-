//
//practicing writing using if statement
//
//preprocessor directive
#include <iostream>
using namespace std;

//main program
int main()
{
	//declare variable and initialize to 0
	float x = 0.0;

	//promt use to enter number over 30 and rean in the value
	cout << "Enter a number over 30: " << endl;
	cin >> x;

	//let user know if the input was incorrect
	if (x <= 30)
		cout << "Your input was off by " << 30 - x << " points from 30 " 
			<< endl;

	//print the number entered
	cout <<"You entered: " << x << endl;

	//statement saying the the program is done
	cout << "\nDONE!" << endl;

	return 0;					//exit program
}