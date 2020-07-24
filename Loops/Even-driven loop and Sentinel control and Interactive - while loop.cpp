//
//even driven and sentinel and interactive while loop
//writing example using salary problem
//
//preprocessor directive
#include <iostream>
using namespace std;

//main program
int main()
{
	//declare constant value for raise
	float const RAISE = 0.02;
	//declare variable and initialize to zero
	double salary = 0.0;
	int years = 0;

	/*using interactive while loop
	to ask if user want to continue the program*/
	//declare char variables 
	char option = 'y';

	while (option == 'y' || option == 'Y')
	{
		//promt user to enter salary and read in
		cout << "Enter salary lower than 50000: ";
		cin >> salary;

		/*useing sentinelwhile loop
		to let user know that they enter the wrong value
		so they need to enter a new one and read in*/
		while (salary <= 0 || salary >= 50000)
		{
			cout << "\nYou entered a wrong value!" << endl;
			cout << "The new salary is: ";
			cin >> salary;
		}

		/*using event-controlled while loop
		to determine how many years will it take
		the original salary to be 50K*/
		while (salary < 50000)
		{
			salary += (salary*RAISE);
			years++;
		}
		//print the years
		cout << "\nIt will take " << years << " years to reach 50K."
			<< endl;

		//ask if user want to keep running the program then enter y or Y
		cout << "\nDo you want to continue if yes enter y/Y, if not enter n/N: ";
		//read in option
		cin >> option;
	}

	//statement saying that program is done
	cout << "\nDONE!" << endl;

	return 0;				//exit program
}