//string exercise
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	const int SIZE = 5;
	string name[SIZE];
	int votes[SIZE], winner = 0, id_winner = 0;
	double percentage[SIZE], total_votes = 0.0;

	cout << "Enter name for candidate and votes: ";

	for (int i = 0; i < SIZE; i++)
	{
		cin >> name[i] >> votes[i];
		total_votes += votes[i];
	}

	cout << left << setw(11) << "\nCandidate"
		<< setw(16) << "Votes Received"
		<< setw(16) << "% of Total Votes" << endl;

	for (int i = 0; i < SIZE; i++)
	{
		percentage [i]= votes[i] / total_votes * 100.0;
		cout << setw(11) << name[i]
			<< setw(16) << votes[i]
			<< fixed << setprecision(2) << setw(16)
			<< percentage[i] << endl;
	}

	for (int i = 0; i < SIZE; i++)
	{
		if (winner < votes[i])
		{
			winner = votes[i];
			id_winner = i;
		}
	}

	cout << setprecision(0) << setw(11)
		<< "\nTotal " << total_votes << endl;
	cout << "The Winner of the Election is " << name[id_winner] << endl;


	return 0;
}