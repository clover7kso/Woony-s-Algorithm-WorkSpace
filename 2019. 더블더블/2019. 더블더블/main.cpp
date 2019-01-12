#include <iostream>
using namespace std;
int main()
{
	int T = 0;
	int save = 1;
	cin >> T;
	for (int i = 1; i <= T + 1; i++)
	{
		cout << save << " ";
		save = save * 2;
	}

}