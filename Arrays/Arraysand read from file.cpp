//
//Arrays
//
//preprocessor directive
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	/*without arrays
	int grade1, grade2, grade3, grade4, grade5;*/
	//better way
	const int size = 10;
	int grade[size];

	int maxGrade = 0;
	double average = 0.0, sum = 0.0;

	ifstream infile;
	infile.open("score.txt");

	//read grade from users
	cout << "Enter grades: ";
	/*without using arrays
	cin >> grade1 >> grade2 >> grade3 >> grade4 >> grade5;*/

	//read
	for (int i = 0; i < size; i++)
		infile >> grade[i];

	//print
	cout << endl;
	for (int i = 0; i < size; i++)
		cout << grade[i] << " ";
	cout << endl;

	//determine max
	for (int i = 0; i < size; i++)
	{
		if (grade[i] > maxGrade)
			maxGrade = grade[i];

		sum += grade[i];
	}
	
	average = sum / size;

	cout << "\nMax Grade: " << maxGrade;
	cout << "\nAverage Grade: " << average << endl;
	
	infile.close();

	return 0;
}