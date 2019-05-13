#include <iostream>
using namespace std;

int main(void)
{
	int testCase;
	cin >> testCase;

	for (int t = 1; t <= testCase; t++)
	{
		int N;
		cin >> N;

		int * mArray = new int[N];
		for (int i = 0; i < N; i++)
			cin >> mArray[i];

		int Up = INTMAX_MIN;
		int Down = INTMAX_MIN;
		for (int i = 0; i < N - 1; i++)
		{
			if (mArray[i] < mArray[i + 1] && Up < mArray[i + 1] - mArray[i])
				Up = mArray[i+1] - mArray[i];
			if (mArray[i] > mArray[i + 1] && Down < mArray[i] - mArray[i + 1])
				Down = mArray[i] - mArray[i + 1];
		}
		if (Up == INTMAX_MIN)
			Up = 0;
		if (Down == INTMAX_MIN)
			Down= 0;
		cout << "#" << t << " " << Up << " " << Down << endl;
	}
}