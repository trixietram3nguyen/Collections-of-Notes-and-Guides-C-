
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
	//declare array
	const int size = 20;
	int my_array[size] = { 0 };
	int max = 0, maxIdx = 0;
	double sum(0.0), average(0.0);

	//declare file variable
	ifstream infile;
	infile.open("array1.txt");

	if (!infile.good())
	{
		cout << "Error, cannot open input file" << endl;
		exit(1);
	}

	//read data from file
	for (int i = 0; i<size; i++)
		infile >> my_array[i];

	cout << "\nContents & index values for locations 0-19.\n";
	//format output, print headings
	cout << left 
		<< setw(18) << "Array Index"
		<< setw(12) << "Content" << endl;


	for (int i = 0; i<size; i++)
		if (i<10) cout << left << "my_array[" << i << setw(3) << "]"
			<< right << setw(12) << my_array[i] << endl;
		else cout << left << "my_array[" << i << setw(2) << "]"
			<< right << setw(12) << my_array[i] << endl;

	cout << "\nContents & index values for locations 18-7.\n";
	//format output, print headings
	cout << left
		<< setw(18) << "Array Index"
		<< setw(12) << "Content" << endl;

	for (int i = 18; i >= 7; i--)
		if (i<10) cout << left << "my_array[" << i << setw(3) << "]"
			<< right << setw(12) << my_array[i] << endl;
		else cout << left << "my_array[" << i << setw(2) << "]"
			<< right << setw(12) << my_array[i] << endl;

	cout << "\nContents & index values for even index values.\n";
	cout << left
		<< setw(18) << "Array Index"
		<< setw(12) << "Content" << endl;

	for (int i = 0; i<size; i++)
		if (i % 2 == 0)
		{
			if (i<10) cout << left << "my_array[" << i << setw(3) << "]"
				<< right << setw(12) << my_array[i] << endl;
			else cout << left << "my_array[" << i << setw(2) << "]"
				<< right << setw(12) << my_array[i] << endl;
		}

	cout << "\nEven valued contents and their index values.\n";
	cout << left
		<< setw(18) << "Array Index"
		<< setw(12) << "Content" << endl;

	for (int i = 0; i<size; i++)
		if (my_array[i] % 2 == 0)
		{
			if (i<10) cout << left << "my_array[" << i << setw(3) << "]"
				<< right << setw(12) << my_array[i] << endl;
			else cout << left << "my_array[" << i << setw(2) << "]"
				<< right << setw(12) << my_array[i] << endl;
		}

	cout << "\nLargest integer stored & its index location.\n";
	for (int i = 0; i<size; i++)
	{
		if (my_array[i] > max)
		{
			max = my_array[i];
			maxIdx = i;
		}
	}
	cout << "Largest value is " << max << " at index location " << maxIdx << endl;

	cout << "\nSum and average of all integers stored in array.\n";

	for (int i = 0; i<size; i++)
		sum += my_array[i];

	average = sum / size;
	cout << "Sum = " << sum << endl;
	cout << "Average = " << average << endl << endl;


	return 0;
}