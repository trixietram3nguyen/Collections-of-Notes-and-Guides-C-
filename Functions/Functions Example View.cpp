#include <iostream>
using namespace std;

int main()
{
	char category = '0';

	cout << "Program to Compute Hospital Charges" << endl;

	category = Menu();

	return 0;
}

char Menu()
{
	char option = '0';

	cout << "For In-patient, enter I/i" << endl
		<< "For Out-patient, enter O/o" << endl;
	cin >> option;

	return option;
}