#include <iostream>
using namespace std;

int combination(int n, int r)
{
	if (n == r || r == 0) return 1;
	else return combination(n - 1, r - 1) + combination(n - 1, r);
}

int main(void)
{
	combination(5, 3);
	combination(7, 3);
	combination(5, 2);
	combination(9, 3);
	combination(9, 5);
}