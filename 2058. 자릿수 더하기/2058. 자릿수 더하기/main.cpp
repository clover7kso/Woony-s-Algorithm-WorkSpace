#include <iostream>
using namespace std;

int main(void)
{
	int myNum;
	cin >> myNum;
	
	int sum = 0;
	int mul = 1000;
	for (int i = 4; i > 0; i--)
	{
		sum += myNum / mul;
		myNum -= (myNum / mul) * mul;
		mul /= 10;
	}
	cout << sum;
}