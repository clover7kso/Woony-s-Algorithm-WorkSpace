#include <iostream>
using namespace std;

int main(void)
{
	int input;
	cin >> input;
	
	for (int i = 1; i <= input; i++)
	{
		int t = i;
		int m = 1000;
		bool clab = true;

		while (m != 0)
		{
			int temp = t / m;
			if (temp != 0 && temp % 3 == 0)
			{
				cout << "-";
				clab = false;
			}
			t -= (t / m) * m;
			m = m / 10;
		}

		if (clab)
			cout << i;
		cout << " ";
	}
}