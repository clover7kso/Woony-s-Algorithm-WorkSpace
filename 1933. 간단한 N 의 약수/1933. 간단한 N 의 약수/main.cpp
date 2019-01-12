#include <iostream>
using namespace std;

int main(void)
{
	int in;
	cin >> in;
	for (int i = 1; i <= in; i++)
	{
		if (in%i == 0)
			cout << i << " ";
	}
}