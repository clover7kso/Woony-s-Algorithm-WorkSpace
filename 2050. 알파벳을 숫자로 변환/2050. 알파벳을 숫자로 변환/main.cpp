#include <iostream>
using namespace std;

int main(void)
{
	char alaphabet[201];
	cin >> alaphabet;
	for (int i = 0; i < 201; i++)
	{
		int ASCII_CODE = alaphabet[i];
		if (ASCII_CODE + 1 - 'A' < 0)
			break;
		cout << ASCII_CODE + 1 - 'A'<<" ";
	}
}