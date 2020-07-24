//
// Input_ErrorBits_demo.cpp
//failbit, badbit, eofbit, goodbit
//cin.clear, cin.ignore
//
#include <iostream>
using namespace std;
int main()
{
	int a = 0, b = 0;
	cout << "\na = " << a << "\nb = " << b << endl;
	cout << "\nEnter stream of integers):" << endl;
	cin >> a;
	cin >> b;
	cout << "\na = " << a << "\nb = " << b << endl;
	cout << "\nDone" << endl;

	//checking bit
	cout << "\nAfter Input";
	cout << "\ncin.eof(): " << cin.eof()
		<< "\ncin.fail(): " << cin.fail()
		<< "\ncin.bad(): " << cin.bad()
		<< "\ncin.good(): " << cin.good() << endl;

	//clear out bit and return everything bit to 1 means make it back to it normal state
	cin.clear();
	cout << "\nAfter calling cin.clear()";
	cout << "\ncin.eof(): " << cin.eof()
		<< "\ncin.fail(): " << cin.fail()
		<< "\ncin.bad(): " << cin.bad()
		<< "\ncin.good(): " << cin.good() << endl;

	/*since when the data is read in the value, it store in 
	the memories, so clearing bit out still cannnot make it work
	therefore use cin.ignore to ignore the letter A entered at 
	the beginning*/
	cin.ignore('A', '\n'); //when I do this, it means it clear out the A?

	cout << "\nEnter a and b again: ";
	cin >> a >> b;

	cout << "\na = " << a << "\nb = " << b << endl;

	cout << "\nDone" << endl;

	return 0;
}