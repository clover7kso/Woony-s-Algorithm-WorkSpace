#include <iostream>
using namespace std;

int main(void)
{
	int testCase;
	cin >> testCase;

	for (int t = 1; t <= testCase; t++)
	{
		cout << "#" << t << " ";
		
		int n;
		cin >> n;
		
		int count[5] = {0};

		while (1)
		{
			if (n % 11 == 0)
			{
				n = n / 11;
				count[4]++;
			}
			else if (n % 7 == 0)
			{
				n = n / 7;
				count[3]++;
			}
			else if (n % 5 == 0)
			{
				n = n / 5;
				count[2]++;
			}
			else if (n % 3 == 0)
			{
				n = n / 3;
				count[1]++;
			}
			else if (n % 2 == 0)
			{
				n = n / 2;
				count[0]++;
			}
			else break;
		}

		for (int i = 0; i < 5; i++)
			cout << count[i] << " ";
		cout << endl;
	}
}