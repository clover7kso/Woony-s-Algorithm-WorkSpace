#include <iostream>
using namespace std;

int main(void)
{
	int num;
	cin >> num;
	int sum = 0;
	for (int i = num; i > 0; i--)
		sum += i;
	cout << sum;
}