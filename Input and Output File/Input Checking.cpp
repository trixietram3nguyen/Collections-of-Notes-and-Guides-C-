/*Write a program that prompts the user to
enter an integer.
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

	cout << "Enter an integer: ";
	cin >> num;

	while (!cin.good())
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << "\nInput value failed: Re-enter value: ";
		cin >> num;
	}

	cout << "\nYou entered: " << num << endl;

	return 0;
}