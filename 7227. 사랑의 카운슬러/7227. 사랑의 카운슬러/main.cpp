#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

long long ans;
int n;
bool haveTeam[20];
void dfs(int pos, int num, vector<pair<long long, long long>> &warm)
{
	if (num == n / 2)
	{
		long long sum = 0;
		long long x = 0;
		long long y = 0;
		for (int i = 0; i < n; i++)
		{
			if (haveTeam[i])
			{
				x += warm[i].first;
				y += warm[i].second;
			}
			else
			{
				x -= warm[i].first;
				y -= warm[i].second;
			}
		}

		sum = x*x + y*y;

		if (ans == -1)
		{
			ans = sum;
		}
		else if (ans > sum)
		{
			ans = sum;
		}
		return;
	}

	for (int i = pos + 1; i < n; i++)
	{
		if (!haveTeam[i])
		{
			haveTeam[i] = true;
			dfs(i, num + 1, warm);
			haveTeam[i] = false;
		}
	}

}

int main()
{
	//freopen("input.txt", "r", stdin);
	int tc;
	cin >> tc;

	for (int t = 1; t <= tc; t++)
	{
		cin >> n;
		vector<pair<long long, long long>> warm(n);
		ans = -1;
		memset(haveTeam, false, sizeof(haveTeam));

		for (int i = 0; i < n; i++)
		{
			cin >> warm[i].first >> warm[i].second;
		}

		dfs(-1, 0, warm);

		cout << "#" << t << " " << ans << "\n";
	}


	return 0;
}