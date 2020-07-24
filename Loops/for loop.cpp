//
//for loop
//
//preprocessor directive
#include <iostream>
using namespace std;

//main program
int main()
{
	/*simple example of for loop
	int count = 0;

	for (count = 2; count <= 20; count += 2)
	{
		cout << count << " ";
	}
	*/

	//more complicate for loop
	double p = 1000.00, r = 0.05, a;
	int n = 0;
	for (n = 1; n <= 10; n++)
	{
		a = p*pow(1 + r, double(n));
		cout << "The amount on deposite after " << n
			<< " year is: " << a
			<< endl;
	}

	return 0;
}