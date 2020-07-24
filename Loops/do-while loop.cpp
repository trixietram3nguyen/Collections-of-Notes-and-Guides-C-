//
//do-while loop example
//
//preprocessor directive
#include <iostream>
using namespace std;

//main program
int main()
{
	int num(0);
	
	do
	{
		cout << "Enter a number between 1-5: ";
		cin >> num;
	} while (num < 1 || num>5);
	cout << num << "is between 1 and 5" << endl;
	cout << "DONE!" << endl;

	return 0;		//exit program
}