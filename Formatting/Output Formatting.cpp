
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//setwidth and setfill
	int col = 0, height = 0;

	cout << "Enter height: ";
	cin >> height;
	cout << "12345678901234567890" << endl;
	for (col = 1; col <= height; col++)
	{
		cout << setw(col) << setfill('*');
		cout << "*";  /*I noticed that if I don't have this line, 
					  then when I run the program it would not show anything
					  so I'm wondering is there any other way to do it
					  or it is mandatory? */
		cout << endl;
	}
	for (col = height; col >= 1; col--)
	{
		cout << setw(col) << setfill('#');
		cout << "#";
		cout << endl;
	}

	return 0;
}