#include <iostream>
using namespace std;

int main(void)
{
	int testCase;
	cin >> testCase;
	for (int t = 1; t <= testCase; t++)
	{
		int x1, x2, y1, y2;
		cin >> x1;
		cin >> y1;
		cin >> x2;
		cin >> y2;
		
		if (x1 > x2)
		{
			int temp = x1;
			x1 = x2;
			x2 = temp;
		}
		if (y1 > y2)
		{
			int temp = y1;
			y1 = y2;
			y2 = temp;
		}

		int N;
		cin >> N;

		int inSide = 0;
		int outSide = 0;
		int middleSide = 0;
		for (int i = 0; i < N; i++)
		{
			int tX, tY;
			cin >> tX;
			cin >> tY;
			if (tX<x2&&tX>x1&&tY<y2&&tY>y1)
				inSide++;
			else if (tX == x1&&tY<=y2&&tY>=y1)
				middleSide++;
			else if (tX == x2&&tY<=y2&&tY>=y1)
				middleSide++;
			else if (tY == y1&&tX<=x2&&tX>=x1)
				middleSide++;
			else if (tY == y2&&tX<=x2&&tX>=x1)
				middleSide++;
			else
				outSide++;
		}

		cout << "#" << t << " " << inSide << " " << middleSide << " " << outSide << endl;
	}
}