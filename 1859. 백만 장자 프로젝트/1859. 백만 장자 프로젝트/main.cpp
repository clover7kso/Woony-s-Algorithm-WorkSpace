#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int testCase;
	cin >> testCase;
	for (int t = 1; t <= testCase; t++)
	{
		int N;
		cin >> N;
		vector <int> mArray;
		for (int i = 0; i < N; i++)
		{
			int temp;
			cin >> temp;
			mArray.push_back(temp);
		}

		int temp = mArray[N-1];
		long long sum = 0;
		for (int i = N-2; i >= 0; i--)
		{
			if (temp < mArray[i])
				temp = mArray[i];
			else
				sum += (temp - mArray[i]);
		}
		cout << "#" << t << " " << sum<<endl;
	}
}