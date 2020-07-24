//
//practicing writing swtich statement
//
//preprocessor directive
#include <iostream>
using namespace std;

//main program 
int main()
{
	//declare variables
	int option(0);
	double x(0.0), y(0.0), result(0.0);
	
	//promt user to pick an option and read in
	cout << "\nEnter 1 for adding."
		<< "\nEnter 2 for subtracting."
		<< "\nEnter 3 for mutiplying."
		<< "\nEnter 4 for dividing."
		<< endl;
	cin >> option;

	//promt user to enter x and y value and read in
	cout << "\nEnter x and y: " << endl;
	cin >> x >> y;

	//switch statement
	switch (option)
	{
	//option 1 is for adding
	case 1: result = x + y;
		//print result for adding x and y
		cout << "\nResult of add = " << result << endl;
		break;
	//option 2 is for subtracting
	case 2: result = x - y;
		//print result for subtracting x and y
		cout << "\nResult of subtract = " << result << endl;
		break;
	//option 3 is for multiplying 
	case 3: result = x * y;
		//print result for multiplying x and y
		cout << "\nResult of multiply = " << result << endl;
		break;
	//option 4 is for dividing
	case 4: result = x / y;
		//print result for dividing x and y
		cout << "\nResult of divide = " << result << endl;
		//break;
	//defaults stating user pick the wrong option
	default: cout << "\nYou pick an invalid option!" << endl;
	}

	//statement saying that the program is done
	cout << "\nDONE!" << endl;

	return 0;				//exit program
}