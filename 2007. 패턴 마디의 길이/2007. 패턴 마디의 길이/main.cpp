#include <iostream>
using namespace std;

int main(void)
{
	int testCase;
	cin >> testCase;
	for (int t = 1; t <= testCase; t++)
	{
		int result=0;
		char mString[31];
		cin >> mString;

		int partCount = 1;
		bool done = false;
		while (true)
		{
			int mCount = 0;
			for (int i = 0; i <=  partCount; i++)
			{
				if (i == partCount)
				{
					done = true;
					break;
				}
				else if (mString[i] != mString[partCount + i])
				{
					partCount++;
					break;
				}
				else
					mCount++;
			}
			if (done == true)
			{
				result = mCount;
				break;
			}
		}

		cout << "#" << t << " " << result << endl;
	}
}