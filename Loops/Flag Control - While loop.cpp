//
//flag control - while loop
//
//preprocessor directive
#include <iostream>
using namespace std;

//main program
int main()
{
	double sum(0.0), average(0.0), num(1.0);
	int count = 0, total(0);
	bool flag = true;
	char option = 'y';

	while (option == 'y' || option == 'Y')
	{
		sum = 0.0, average = 0.0, count = 0;
		flag = true;

		while (flag)
		{
			cout << "Enter number then click enter: ";
			cin >> num;

			sum += num;

			(num != 0) ? count++ : flag = false;
		}

		average = sum / count;
		cout << "\nSum = " << sum << endl
			<< "Average = " << average << endl;

		cout << "\nDo you want to continue enter y/Y for yes, or n/N for no: "
			<< endl;
		cin >> option;
	}
	return 0;
}