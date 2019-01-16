#include <iostream>
using namespace std;

int main(void)
{
	int testCase;
	cin >> testCase;
	for (int t = 1; t <= testCase; t++)
	{
		int sum = 0;
		int N;
		cin >> N;
		bool mSwitch = true;
		for (int i = 1; i <= N; i++)
		{
			if (mSwitch)
			{
				mSwitch = false;
				sum += i;
			}else
			{
				mSwitch = true;
				sum -= i;
			}
		}
		cout << "#" << t << " " << sum << endl;
	}
}