#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	int testCase;
	cin >> testCase;
	for (int t = 0; t < testCase; t++)
	{
		int inputDate;
		cin >> inputDate;
		int year = (inputDate / 10000);
		int month = (inputDate / 100) % 100;
		int day = inputDate % 100;
		
		if (month < 1 || month>12)
			cout << "#" << t + 1 << " " << -1 << endl;
		else if (
			(month == 1 ||
				month == 3 ||
				month == 5 ||
				month == 7 ||
				month == 8 ||
				month == 10 ||
				month == 12)
			&& (day > 31 || day < 1))
			cout << "#" << t + 1 << " " << -1 << endl;
		else if (
			(month == 4 ||
				month == 6 ||
				month == 9 ||
				month == 11)
			&& (day > 30 || day < 1))
			cout << "#" << t + 1<<" " << -1 << endl;
		else if (
			(month == 2)
			&& (day > 28 || day < 1))
			cout << "#" << t + 1 << " " << -1 << endl;
		else
		{
			cout << "#" << t + 1 << " ";
			if((year / 1000) < 1000)
			cout.fill( '0' );  
			cout << setw(4) << year << "/";
			cout << setw(2) << month << "/";
			cout << setw(2) << day << endl;
		}
	}
}