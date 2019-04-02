#include <iostream>
using namespace std;

int main(void)
{
	int TestCase;
	cin >> TestCase;

	for (int t = 0; t < TestCase; t++)
	{
		int hour1, hour2;
		int min1, min2;
		cin >> hour1;
		cin >> min1;
		cin >> hour2;
		cin >> min2;

		int Rhour = hour1+hour2;
		int Rmin = min1+min2;
		
		Rhour = Rhour+ Rmin / 60;
		Rmin = Rmin % 60;
		
		if(Rhour > 12)
			Rhour = Rhour % 12;
		if (Rhour == 0)
			Rhour = 12;

		cout << "#" << t+1 << " " << Rhour << " "<< Rmin<<endl;
	}

}