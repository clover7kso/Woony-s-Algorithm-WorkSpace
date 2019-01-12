#include <iostream>
using namespace std;

int main(void)
{
	int testCase;
	cin >> testCase;
	for (int t = 1; t <= testCase; t++)
	{
		int a, b;
		cin >> a;
		cin >> b;
		int result1 = a / b;
		int result2 = a % b;

		cout << "#" << t << " " << result1 << " " << result2<<endl;
	}
}