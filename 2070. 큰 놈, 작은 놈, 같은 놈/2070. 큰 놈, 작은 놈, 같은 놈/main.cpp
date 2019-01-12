#include <iostream>
using namespace std;

int main(void)
{
	int testCase;
	cin >> testCase;
	for (int t = 1; t <= testCase; t++)
	{
		int first, second;
		cin >> first;
		cin >> second;
		if (first < second)
			cout << "#" << t << " <" << endl;
		else if (first > second)
			cout << "#" << t << " >" << endl;
		else if (first == second)
			cout <<"#" <<t << " =" << endl;
	}
}