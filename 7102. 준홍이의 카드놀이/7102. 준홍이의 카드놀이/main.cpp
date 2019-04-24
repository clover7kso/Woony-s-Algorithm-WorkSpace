#include <iostream>
using namespace std;

int main(void)
{
	int testCase;
	cin >> testCase;
	for (int t = 1; t <= testCase; t++)
	{
		int N, M;
		cin >> N;
		cin >> M;

		int * frequency = new int[N+M];
		for (int i = 0; i < N + M; i++)
			frequency[i] = 0;

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
				frequency[i + j]++;
		}

		int max = INT64_MIN;
		for (int i = 0; i < N + M; i++)
		{
			if (max < frequency[i])
				max = frequency[i];
		}
		cout << "#" << t << " ";
		for (int i = 0; i < N + M; i++)
		{
			if (max == frequency[i])
				cout << i+2<< " ";
		}
		cout << endl;

		
	}
}