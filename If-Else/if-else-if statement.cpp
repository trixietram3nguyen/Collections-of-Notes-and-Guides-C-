//
//practicing writing if-else-if statement
//
//preprocessor directive
#include <iostream>
using namespace std;

//main program
int main()
{
	//declare variable
	float marks(0.0);

	//promt user to enter in marks and read in
	cout << "Enter marks: ";
	cin >> marks;

	//show user that the letter grade is A if marks is greater or equal to 90
	if (marks >= 90)
	{
		cout << "\nYou letter grade is A." << endl;
	}
	//if the first condition is false
	//show user that the letter grade is B if marks is greater or equal to 80
	else if (marks >= 80)
	{
		cout << "\nYou letter grade is B." << endl;
	}
	//if the condition is false
	//show user that the letter grade is C if marks is greater or equal to 70
	else if (marks >= 70)
	{
		cout << "\nYour letter grade is C." << endl;
	}
	else if (marks >= 60)
	{
		cout << "\nYour letter grade is D." << endl;
	}
	//if the condition is false
	//show that user letter grade is F.
	else
	{
		cout << "\nYour letter grade is F." << endl;
	}

	//statement saying that the program is done
	cout << "\nDONE!" << endl;

	return 0;			//exit program

}