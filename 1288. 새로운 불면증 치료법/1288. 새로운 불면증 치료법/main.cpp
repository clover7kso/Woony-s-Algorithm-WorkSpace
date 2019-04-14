#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int main(void)
{
	int testCase;
	cin >> testCase;

	for (int t = 0; t < testCase; t++)
	{
		bool checkList[10] = { false };
		int N;
		cin >> N;
		int temp=N;
		int check = true;
		int increase = 2;
		
		int result = 0;
		while (check)
		{
			check = false;
			
			char fix[8];
			itoa(temp, fix, 10);
			int digit = strlen(fix);
			int k = 1;
			for (int i = 0; i < digit - 1; i++)
				k *= 10;
			for (int z = 0; z < digit; z++)
			{
				checkList[temp / k]=true;
				temp = temp %k;
				k /= 10;
			}

			for (int i = 0; i < 10; i++)
			{
				if (checkList[i] == false)
				{
					check = true;
					temp = N*increase;
					increase++;
					break;
				}
			}
		}
		
		cout << "#" << t+1 << " " << N*(increase-1) << endl;

	}
}