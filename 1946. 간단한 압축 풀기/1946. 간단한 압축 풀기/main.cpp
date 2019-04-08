#include <iostream>
using namespace std;

int main()
{	
	int testCase;
	cin >> testCase;

	for (int t = 1; t <= testCase; t++)
	{
		int n_alpha;
		cin >> n_alpha;

		char *alaphList_char=new char[n_alpha];
		int *alaphList_num=new int[n_alpha];

		for (int i = 0; i < n_alpha; i++)
		{
			cin >> alaphList_char[i];
			cin >> alaphList_num[i];
		}
		
		cout << "#" << t << endl;
		int enter = 0;
		for (int i = 0; i < n_alpha; i++)
		{
			while (alaphList_num[i] != 0)
			{
				cout << alaphList_char[i];
				enter++;
				if (enter == 10)
				{
					cout << endl;
					enter = 0;
				}
				alaphList_num[i]--;
			}
		}
		cout << endl;

	}
	return 0;
}

