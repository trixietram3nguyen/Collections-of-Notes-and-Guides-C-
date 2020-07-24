// sizeof
#include <iostream>
using namespace std;
int main()
{
	bool i_bool(false);
	char i_char(' ');
	short i_short(0);
	int i_int(0);
	long i_long(0);
	float i_float(0.0);
	double i_double(0.0);
	long double i_long_double(0.0);
	cout << "sizeof bool = " << sizeof(i_bool) << " bytes" << endl;
	cout << "sizeof char = " << sizeof(i_char) << " bytes" << endl;
	cout << "sizeof short = " << sizeof(i_short) << " bytes" << endl;
	cout << "sizeof int = " << sizeof(i_int) << " bytes" << endl;
	cout << "sizeof long = " << sizeof(i_long) << " bytes" << endl;
	cout << "sizeof float = " << sizeof(i_float) << " bytes" << endl;
	cout << "sizeof double = " << sizeof(i_double) << " bytes" << endl;
	cout << "sizeof long double = " << sizeof(i_long_double) << " bytes" << endl;
	return 0;
}