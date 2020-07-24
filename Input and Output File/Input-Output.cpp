//file input and output

#include <iostream>
#include <fstream>				//step 1
using namespace std;

int main()
{
	int a(0), b(0), c(0), d(0);

	//declare input file
	ifstream infile;			//step 2
	ofstream outfile;

	infile.open("input.txt");	//step 3
	outfile.open("output.txt");

	infile >> a >> b >> c >> d;		//step 4

	outfile << "a = " << a << endl
		<< "b = " << b << endl
		<< "c = " << c << endl
		<< "d = " << d << endl;

	infile.close();				//step 5
	outfile.close();

	return 0;
}