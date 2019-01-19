#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int testCase;
	cin >> testCase;
	for (int t = 1; t <= testCase; t++)
	{
		int nums[10];
		int max = -1;
		int min = 10001;
		float sum = 0;
		for (int i = 0; i < 10; i++)
		{
			int temp;
			cin >> temp;
			nums[i] = temp;
			if (max < temp)
				max = temp;
			if (min > temp)
				min = temp;
			sum += temp;
		}

		sum -= max;
		sum -= min;
		sum /= 8;
		cout << "#" << t << " " << round(sum) << endl;
	}
}