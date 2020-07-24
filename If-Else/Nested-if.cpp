//
//practicing writing program using nested-if statment
//
//preprocessor directive
#include <iostream>
using namespace std;

//main program
int main()
{
	//declare variable
	int age(0);

	//promt user to enter age and read in
	cout << "Enter age: ";
	cin >> age;

	//print "too young to drive" if age is less than 15
	if (age < 15)
	{
		cout << "\nToo young to drive." << endl;
	}
	//goes to else when the if condition is false
	else
	{
		//print "you can get a learners permits" if age is equal 15
		if (age == 15)
			cout << "\nYou can get a learners permits." << endl;
		//print "you can get a license" if age is not equal 15
		else
			cout << "\nYou can get a license." << endl;
	}

	//statement saying that the program is done
	cout << "\nDONE!" << endl;

	return 0;					//exit program
}