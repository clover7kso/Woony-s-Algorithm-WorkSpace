#include <iostream>
using namespace std;

int main(void)
{
	int testCase;
	cin >> testCase;
	for (int t = 1; t <= testCase; t++)
	{
		int N, M;
		cin >> N; // 사람
		cin >> M; // 문제
		
		int * people = new int[N];
		for (int i = 0; i < N; i++)
			people[i] = 0;

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				int temp;
				cin >> temp;
				if (temp == 1)
					people[i]++;
			}
		}

		int max = 0;
		for (int i = 0; i < N; i++)
		{
			if (people[i] > max)
				max = people[i];
		}

		int count = 0;
		for (int i = 0; i < N; i++)
		{
			if (people[i] == max)
				count++;
		}

		cout << "#" << t << " " << count << " " << max << endl;

	}
}