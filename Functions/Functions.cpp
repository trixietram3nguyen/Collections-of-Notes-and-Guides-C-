//
//Writing functions
//
//preprocessor directive
#include <iostream>
#include <iomanip>
using namespace std;

double getHours(void);
double getRate(void);
double payCheck(double hr, double rt);
void Print_paycheck(double s);

//main program
int main()
{
	double rate = 0.0, hours = 0.0, salary = 0.0;

	hours = getHours();
	rate = getRate();
	salary = payCheck(hours, rate);

	Print_paycheck(salary);

	return 0;
}

double getHours(void)
{
	double hrs = 0.0;
	cout << "Enter hours: ";
	cin >> hrs;
	cout << "You entered: " << hrs << " hours" << endl;
	return hrs;
}

double getRate(void)
{
	double rt = 0.0;
	cout << "Enter rate: ";
	cin >> rt;
	cout << "You entered: " << rt << endl;
	return rt;
}

double payCheck(double hr, double rt)
{
	double salary = 0.0;
	if (hr <= 40)
	{
		salary = hr*rt;
	}
	else
	{
		salary = (40.0*rt) + (hr - 40)*(1.5*rt);
	}

	return salary;
}

void Print_paycheck(double s)
{
	cout << "Salary = " << s << endl;
}
