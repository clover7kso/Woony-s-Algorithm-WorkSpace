#include <iostream>
using namespace std;

int main(void)
{
	int testCase;
	cin >> testCase;
	for (int t = 1; t <= testCase; t++)
	{
		int tN;
		cin >> tN;

		int point[101] = {0};
		for (int i = 0; i < 1000; i++)
		{
			int temp;
			cin >> temp;
			point[temp]++;
		}

		int max = point[0];
		for (int i = 0; i <= 100; i++)
		{
			if (max < point[i])
				max = point[i];
		}
		for (int i = 100; i >= 0; i--)
		{
			if (max == point[i])
			{
				cout << "#" << tN << " " << i << endl;
				break;
			}
		}

	}
}