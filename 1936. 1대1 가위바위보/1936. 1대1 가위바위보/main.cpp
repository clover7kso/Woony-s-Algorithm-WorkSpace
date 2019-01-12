#include <iostream>
using namespace std;

int main(void)
{
	int A, B;
	cin >> A; cin >> B;

	if (A - 1 == B || (A == 1 && B == 3))
		cout << "A";
	else
		cout << "B";
}