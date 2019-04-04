#include <iostream>
using namespace std;

void degree_90(int **matrix, int **resultMatrix, int size);

int main(void)
{
	int testCase;
	cin >> testCase;
	for (int t = 0; t < testCase; t++)
	{
		int size;
		cin >> size;
		
		//Make Matrix
		int ** matrix;
		int ** matrix_90;
		int ** matrix_180;
		int ** matrix_270;

		matrix = new int *[size];
		matrix_90 = new int *[size];
		matrix_180 = new int *[size];
		matrix_270 = new int *[size];
		for (int i = 0; i < size; i++)
		{
			matrix[i] = new int[size];
			matrix_90[i] = new int[size];
			matrix_180[i] = new int[size];
			matrix_270[i] = new int[size];
		}

		//Input Matrix
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				cin >> matrix[i][j];
			}
		}

		degree_90(matrix, matrix_90, size);
		degree_90(matrix_90, matrix_180, size);
		degree_90(matrix_180, matrix_270, size);

		cout << "#" << t+1 << endl;
		for (int i = 0; i < size; i++)
		{
			for (int k = 0; k < 3; k++)
			{
				for (int j = 0; j < size; j++)
				{
					if (k == 0)
						cout << matrix_270[i][j];
					else if (k == 1)
						cout << matrix_180[i][j];
					else
						cout << matrix_90[i][j];
				}
				cout << " ";
			}
			cout << endl;
		}
	}
}

void degree_90(int **matrix, int **resultMatrix, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			resultMatrix[i][j] = matrix[i][size - 1 - j];
		}
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = i; j < size; j++)
		{
			int temp = resultMatrix[i][j];
			resultMatrix[i][j] = resultMatrix[j][i];
			resultMatrix[j][i] = temp;
		}
	}
}