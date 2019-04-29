#include <iostream>
#include <string>
#include <algorithm>
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
		
		vector<string> Title;
		for (int i = 0; i < N; i++)
		{
			string temp;
			cin >> temp;
			Title.push_back(temp);
		}

		sort(Title.begin(), Title.end());

		
		int count = 0;

		if (Title[0].at(0) == 'A')
		{
			count++;
			for (int i = 1; i < N; i++)
			{
				if (Title[i].at(0) == Title[i - 1].at(0))
					count = count;
				else if (Title[i].at(0) == Title[i - 1].at(0) + 1)
					count++;
				else break;
			}
		}

		cout << "#" << t << " " << count<<endl;
		
	}
}