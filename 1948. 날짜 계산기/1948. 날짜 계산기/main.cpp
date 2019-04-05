#include <iostream>
using namespace std;

int main(void)
{
	int testCase;
	cin >> testCase;
	int date[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	for (int t = 1; t <= testCase; t++)
	{
		int month1, date1;
		int month2, date2;
		cin >> month1;
		cin >> date1;
		cin >> month2;
		cin >> date2;
		
		int result = 0;
		for (int i = 1; i < month2 - month1; i++)
			result += date[month1 - 1 + i];

		result += date[month1-1] - date1;
		if(month1!=month2)
			result += date2;
		cout << "#" << t <<" "<<result+1<< endl;
	}
}