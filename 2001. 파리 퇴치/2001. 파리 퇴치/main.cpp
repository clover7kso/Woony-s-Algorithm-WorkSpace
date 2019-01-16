#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int testCase;
	cin >> testCase;
	
	for (int t = 1; t <= testCase; t++)
	{
		int N, M;
		cin >> N; cin >> M;
		vector<int>  * map = new vector<int>[N];
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				int temp;
				cin >> temp;
				map[i].push_back(temp);
			}
		}
		
		int result = 0;
		for (int i = 0; i <= N - M; i++)
		{
			for (int j = 0; j <= N - M; j++)
			{
				int sum = 0;
				for (int a = 0; a < M; a++)
				{
					for (int b = 0; b < M; b++)
						sum += map[i + a][j + b];
				}

				if (result < sum)
					result = sum;
			}
		}

		cout << "#" << t << " " << result<<endl;
	}
}