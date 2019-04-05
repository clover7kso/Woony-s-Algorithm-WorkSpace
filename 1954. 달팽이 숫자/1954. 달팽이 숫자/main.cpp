#include <iostream>
using namespace std;

int main(void)
{
	int testCase;
	cin >> testCase;

	for (int t = 1; t <= testCase; t++)
	{
		int size;
		cin >> size;

		int ** matrix = new int*[size];
		for (int i = 0; i < size; i++)
			matrix[i] = new int[size];

		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
				matrix[i][j] = 0;
		}

		//right = 1, down = 2, left = 3, up =4
		int direction = 1;
		int x = 0;
		int y = 0;
		for (int i = 1; i <= size*size; i++)
		{
			matrix[x][y] = i;
			if (direction == 1)
			{
				if (x == size - 1 || matrix[x + 1][y] != 0)
				{
					direction = 2;
					y++;
				}
				else
					x++;
			}else if(direction == 2)
			{
				if (y == size - 1 || matrix[x][y + 1] != 0)
				{
					direction = 3;
					x--;
				}
				else
					y++;
			}
			else if (direction == 3)
			{
				if (x == 0 || matrix[x - 1][y] != 0)
				{
					direction = 4;
					y--;
				}
				else
					x--;
			}
			else if (direction == 4)
			{
				if (y == 0 || matrix[x][y - 1] != 0)
				{
					direction = 1;
					x++;
				}
				else
					y--;
			}
		}
		
		cout << "#" << t << endl;
		//출력부분
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
				cout << matrix[j][i] << " ";
			cout << endl;
		}
	}
}