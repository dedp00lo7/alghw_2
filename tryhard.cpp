#include <iostream>
using namespace std;

void SimpleNumber(int a)
{
	if (a == 1)
	{
		cout << "Not Simple!" << endl;
	}
	else
	{
		if (a == 2 || a == 3 || a == 7)
		{
			cout << "Number is simple" << endl;
		}
		else
		{
			if (a % 2 == 0 || a % 3 == 0 || a % 5 == 0 || a % 7 == 0)
			{
				cout << "Not Simple!" << endl;

			}
			else
			{
				cout << "Number is simple" << endl;
			}
		}
	}
}

int main()
{
	int a;
	cin >> a;
	SimpleNumber(a);
	return 0;
}
