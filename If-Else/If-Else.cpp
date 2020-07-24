// checking hw
#include <iostream>
using namespace std;
int main()
{
	int x(0), y(0);

	cout << "Enter value x and y: ";
	cin >> x >> y;

	if (x < y)
	{
		if (y > 3) cout << "message about y > 3";
	}
	else cout << "message about x and y";

	
	return 0;
}