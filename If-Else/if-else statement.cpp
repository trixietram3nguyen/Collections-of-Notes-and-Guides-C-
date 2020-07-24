//
//practicing writing if-else statement
//
//preprocessor directive
#include <iostream>
using namespace std;

//main program
int main()
{
	//declare variable
	int year, k;

	//promt user enter year and read in
	cout << "Enter year: ";
	cin >> year;

	//calculate the remainder k
	k = year % 4;

	/*show user that if k equal 0 then the year is the selection year
	if k not equal 0 then the year is not selection year */
	if (k == 0)
	{
		cout << year << " is a US presidential election year."
			<< endl;
	}
	else
	{
		cout << year << " is not a US presidential election year."
			<< endl;
	}

	//statment saying the the program is done
	cout << "\nDONE!" << endl;

	return 0;				//exit program
}