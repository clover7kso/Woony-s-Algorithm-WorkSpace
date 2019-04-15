#include <iostream>
using namespace std;

int main(void)
{
	int testCase;
	cin >> testCase;

	for (int t = 0; t < testCase; t++)
	{
		int N;
		cin >> N;
		int * mArray = new int[N];
		for (int i = 0; i < N; i++)
			cin >> mArray[i];

		int min = mArray[0];
		if (min < 0)
			min = 0-min;
		for (int i = 0; i < N; i++)
		{
			int temp = mArray[i];
			if (temp < 0)
				temp = 0-temp;
			if (temp < min)
				min = temp;
		}

		int count = 0;
		for (int i = 0; i < N; i++)
		{
			if (mArray[i] == min || mArray[i] == 0-min)
				count++;
		}
		cout << "#" << t+1 << " " << min << " " << count << endl;
	}
}