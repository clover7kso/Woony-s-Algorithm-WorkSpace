#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int testCase;
	cin >> testCase;

	for (int t = 0; t < testCase; t++)
	{
		long long N;
		string X;
		cin >> N;
		cin >> X;

		long long result = 0;
		for (int i = 0; i < X.length(); i++)
			result += (X.at(i) - 48);
		result = result % (N - 1);
		
		cout << "#" << t+1 << " " << result << endl;
	}
}