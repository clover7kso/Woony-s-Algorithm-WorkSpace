#include <iostream>
using namespace std;
int main(void)
{
	int testCase = 0;
	cin >> testCase;
	for (int t = 1; t <= testCase; t++)
	{
		int sum = 0;
		for (int i = 1; i <= 10; i++)
		{
			int temp = 0;
			cin >> temp;
			if (temp % 2 != 0)
				sum += temp;
		}
		cout << "#" << t << " " << sum << endl;
	}
}