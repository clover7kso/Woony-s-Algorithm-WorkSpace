#include <iostream>
using namespace std;

int main(void)
{
	int testCase;
	cin >> testCase;
	for (int t = 1; t <=testCase; t++)
	{
		int price;
		cin >> price;
		int checkPoint[8] = {0};
		checkPoint[0] = price / 50000;
		price = price % 50000;
		checkPoint[1] = price / 10000;
		price = price % 10000;
		checkPoint[2] = price / 5000;
		price = price % 5000;
		checkPoint[3] = price / 1000;
		price = price % 1000;
		checkPoint[4] = price / 500;
		price = price % 500;
		checkPoint[5] = price / 100;
		price = price % 100;
		checkPoint[6] = price / 50;
		price = price % 50;
		checkPoint[7] = price / 10;

		cout << "#" << t << endl;
		for (int i = 0; i < 8; i++)
			cout << checkPoint[i]<< " ";
		cout << endl;
	}
}