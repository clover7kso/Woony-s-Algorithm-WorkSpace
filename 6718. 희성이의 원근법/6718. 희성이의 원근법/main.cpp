#include <iostream>
using namespace std;
int temp;
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int testCase;
	cin >> testCase;
	for (int t = 1; t <= testCase; t++)
	{
		
		cin >> temp;
		int result = 5;
		if (temp < 100)
			result = 0;
		else if (temp < 1000)
			result = 1;
		else if (temp < 10000)
			result = 2;
		else if (temp < 100000)
			result = 3;
		else if (temp < 1000000)
			result = 4;
		//endl 과 '\n' 은 10배 속도차이가 난다
		cout << "#" << t << " " <<result<< '\n';
	}
}