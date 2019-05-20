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
		int BUS_STOP[5001] = {0};
		for (int i = 0; i < N; i++)
		{
			int A,B;
			cin >> A;
			cin >> B;
			for (int i = A; i <= B; i++)
				BUS_STOP[i]++;
		}

		int P;
		cin >> P;
		cout << "#"<<t<<" ";
		for (int i = 0; i < P; i++)
		{
			int temp;
			cin >> temp;
			cout << BUS_STOP[temp]<<" ";
		}
		cout << '\n';

	}
}