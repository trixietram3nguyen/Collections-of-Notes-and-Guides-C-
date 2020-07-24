//
//File input/output
//
//preprocessor directive
#include <iostream>
#include <fstream>
using namespace std;

//main program
int main()
{
	int score = 0, count = 0;
	double total = 0.0, aveg = 0.0;

	ifstream infile;
	ofstream outfile;

	infile.open("scores.txt");
	outfile.open("average.txt");

	while (!infile.eof())
	{
		infile >> score;
		count++;
		cout << score << " , ";
		total += score;
	}

	aveg = total / count;
	outfile << "The average = " << aveg;

	infile.close();
	outfile.close();

	return 0;
}