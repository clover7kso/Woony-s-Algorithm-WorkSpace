#include <iostream>
#include <string>
#include <vector>
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
		
		vector <pair<string, int>> GOAL;

		for (int i = 0; i < N; i++)
		{
			pair<string, int> temp;
			cin >> temp.first;
			cin >> temp.second;
			GOAL.push_back(temp);
		}

		int result = 0;
		for (int i = 0; i < M; i++)
		{
			string temp;
			cin >> temp;
			for(int j=0;j<N;j++)
			{
				bool flag = true;
				for (int i = 0; i < 8; i++)
				{
					if (GOAL[j].first.at(i) != '*' && GOAL[j].first.at(i) != temp.at(i))
					{
						flag = false;
						break;
					}
				}
				if (flag == true)
					result += GOAL[j].second;
			}
		}

		cout << "#" << t << " " << result << endl;
	}
}