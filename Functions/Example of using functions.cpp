
#include<iostream>
#include <cmath>
using namespace std;

/*swap 
void swap(int&, int&);

int main()
{
	int n1 = 5, n2 = 15;
	cout << "Before swap: n1 is " << n1 << "and n2 is " << n2 << endl;

	swap(n1, n2);

	cout << "After swap: n1 is " << n1 << "and n2 is " << n2 << endl;

	return 0;
}

//definition
void swap(int & x, int & y)
{
	int temp = 0;
	temp = x;
	x = y;
	y = temp;
}
*/

/*Write a program that computes the sine and
cosine for a given angle.The program should
write a function, which takes the angle in
degrees as a parameter and computes and
returns the sine and cosine values back to the
main() program.*/

void ComputeSineCosine(double d, double & sin, double & cosn);

int main()
{
	double deg(0.0), sine(0.0), cosine(0.0);

	cout << "Enter degree: ";
	cin >> deg;
	ComputeSineCosine(deg, sine, cosine);

	cout << "sine(" << deg << ") = " << sine
		<< "cosine(" << deg << ") = " << cosine << endl;

	return 0;
}
//definition
void ComputeSineCosine(double d, double & sine, double & cosn)
{
	double radians(0.0);
	radians = d*(3.1415 / 100);
	sine = sin(radians);
	cosn = cos(radians);

}