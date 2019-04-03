#include <iostream>
using namespace std;

bool checkRow(int matrix[][9]);
bool checkColumn(int matrix[][9]);
bool checkSquare(int matrix[][9]);

int main(void)
{
	int matrix[9][9];
	int testCase;
	cin >> testCase;
	for (int T = 1; T <= testCase; T++)
	{
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				cin >> matrix[i][j];
			}
		}

		int result = 0;
		if (checkRow(matrix))
		{
			if (checkColumn(matrix))
			{
				if (checkSquare(matrix))
				{
					result = 1;
				}
			}
		}
		cout << "#" << T << " " << result << endl;
	}
}


bool checkRow(int matrix[][9])
{
	for (int i = 0; i < 9; i++)
	{
		bool check[9] = { false };
		for (int j = 0; j < 9; j++)
		{
			check[matrix[i][j] - 1] = true;
		}
		for (int k = 0; k < 9; k++)
		{
			if (check[k] == false)
				return false;
		}
	}
	return true;
}

bool checkColumn(int matrix[][9])
{
	for (int i = 0; i < 9; i++)
	{
		bool check[9] = { false };
		for (int j = 0; j < 9; j++)
		{
			check[matrix[j][i] - 1] = true;
		}
		for (int k = 0; k < 9; k++)
		{
			if (check[k] == false)
				return false;
		}
	}
	return true;
}


bool checkSquare(int matrix[][9])
{
	for (int i = 0; i < 9; i = i + 3)
	{
		for (int j = 0; j < 9; j = j + 3)
		{
			bool check[9] = { false };
			for (int k = 0; k < 3; k++)
			{
				for (int t = 0; t < 3; t++)
				{
					check[matrix[i+k][j+t] - 1] = true;
				}
			}
			for (int k = 0; k < 9; k++)
			{
				if (check[k] == false)
					return false;
			}
		}
	}
	return true;
}