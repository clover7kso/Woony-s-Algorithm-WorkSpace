#include <iostream>
using namespace std;

int main()
{
	int testCase;
	cin >> testCase;
	
	for (int t = 1; t <= testCase; t++)
	{
		int N;
		cin >> N;

		double result = 0;
		double p;
		double x;
		for (int i = 0; i < N; i++)
		{
			cin >> p;
			cin >> x;
			result += (p*x);
		}
		
		cout << "#" << t << " ";
		printf("%.6f\n", result);
	}
}