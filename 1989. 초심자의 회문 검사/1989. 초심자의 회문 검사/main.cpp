#include <iostream>
using namespace std;

int main(void)
{
	int testCase;
	cin >> testCase;
	
	for (int t = 1; t <= testCase; t++)
	{
		char mString[11];
		cin >> mString;
		
		int length = 0;
		for (int i = 0; i < 11; i++)
		{
			if (mString[i] == '\0')
			{
				length = i;
				break;
			}
		}

		int result = 1;
		for (int i = 0; i <= length / 2; i++)
		{
			if (mString[i] != mString[length - 1 - i])
			{
				result = 0;
				break;
			}
		}

		cout << "#" << t << " " << result << endl;
	}
}