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

		int count = 1;
		for (int i = 1; i < N; i++)
		{
			int result=0;
			for (int k = i; k < N; k++)
			{
				result += k;
				if (result >= N)
				{
					if (result == N)
						count++;
					break;
				}
			}
		}
		
		cout << "#"<<t<<" "<<count<<endl;
	}
}