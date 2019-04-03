#include <iostream>
using namespace std;
void swap(int *a, int *b);

int main(void)
{
	int testCase;
	cin >> testCase;
	for (int t = 1; t <= testCase; t++)
	{
		int length;
		cin >> length;
		int * intArray = new int[length];
		for (int i = 0; i < length; i++)
			cin >> intArray[i];
		
		for (int i = 0; i < length; i++)
		{
			for (int j = i+1; j < length; j++)
			{
				if (intArray[i] > intArray[j])
					swap(intArray[i], intArray[j]);
			}
		}

		cout << "#" << t << " ";
		for (int i = 0; i < length; i++)
			cout << intArray[i] << " ";
		cout << endl;

	}
}


void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}