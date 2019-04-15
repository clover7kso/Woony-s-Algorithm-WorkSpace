#include <iostream>
using namespace std;

int main(void)
{
	int testCase;
	cin >> testCase;

	for (int t = 1; t <= testCase; t++)
	{
		int P, Q, R, S, W;
		cin >> P;
		cin >> Q;
		cin >> R;
		cin >> S;
		cin >> W;

		int firstPrice = P*W;
		int secondPrice;
		if (W < R)
			secondPrice = Q;
		else
			secondPrice = Q + S * (W - R);

		if (secondPrice > firstPrice)
			cout << "#" << t << " " << firstPrice << endl;
		else
			cout << "#" << t << " " << secondPrice << endl;
		
	}
}