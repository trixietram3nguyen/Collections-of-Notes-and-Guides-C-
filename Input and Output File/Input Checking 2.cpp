/*Write a program that prompts the user to
enter a integer in the range of 1-10.
• Print the value entered.
• Your program should check for input failure
and if input fails, clear the input and allow the
user to re-enter values.
*/

//preprocessor directive
#include <iostream>
using namespace std;

//main program
int main()
{
	int num = 0;

	cout << "Enter an interger between 1 - 10: ";
	cin >> num;

	while (!cin.good() || (num < 1 || num > 10))
	{
		
		
		if (!cin.good())
		{
			cin.clear();
			cin.ignore(10, '\n');
			cout << "\nInput failure: Re-enter value: ";
			cin >> num;

		}

		if (num < 1 || num > 10)
		{
			cout << "\nInput failure: Re-enter value between 1 - 10: ";
			cin >> num;
		}
	}

	cout << "\nYou entered: " << num << endl;

	return 0;
}