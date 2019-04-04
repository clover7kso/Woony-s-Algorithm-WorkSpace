#include <iostream>
using namespace std;

int main(void)
{
	int testCase;
	cin >> testCase;
	for (int t = 1; t <= testCase; t++)
	{
		int size1;
		int size2;
		cin >> size1;
		cin >> size2;

		int *array1 = new int[size1];
		int *array2 = new int[size2];

		for (int i = 0; i < size1; i++)
			cin >> array1[i];
		for (int i = 0; i < size2; i++)
			cin >> array2[i];

		int biggerSize;
		int max = INT32_MIN;
		if (size1 >= size2)
		{
			biggerSize = size1;
			for (int i = 0; i <= biggerSize - size2; i++)
			{
				int sum = 0;
				for (int j = 0; j < size2; j++)
					sum += array1[i + j] * array2[j];
				if (max < sum)
					max = sum;
			}
		}
		else
		{
			biggerSize = size2;
			for (int i = 0; i <= biggerSize - size1; i++)
			{
				int sum = 0;
				for (int j = 0; j < size1; j++)
					sum += array1[j] * array2[j+i];
				if (max < sum)
					max = sum;
			}
		}


		cout << "#" << t << " " << max << endl;
	}
}