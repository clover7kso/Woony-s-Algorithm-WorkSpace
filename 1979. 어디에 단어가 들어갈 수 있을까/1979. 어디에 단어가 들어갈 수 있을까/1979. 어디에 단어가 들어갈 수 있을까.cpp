#include <iostream>
using namespace std;
int main()
{
	int TestCase;
	cin >> TestCase;
	for (int t = 1; t <= TestCase; t++)
	{
		int N, K; // N = matrix의 크기, K = 글자의 수
		cin >> N;
		cin >> K;
		
		//2차원 배열 동적 선언
		int **matrix = new int*[N];
		for (int i = 0; i < N; i++) {
			matrix[i] = new int[N]; 
			memset(matrix[i], 0, sizeof(int)*N);
		}

		//matrix에 입력 받음
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				cin >> matrix[i][j];
			}
		}

		int result = 0;
		//가로행에서 단어가 들어갈 공간 찾기
		for (int i = 0; i < N; i++)
		{
			int count = 0;
			for (int j = 0; j < N; j++)
			{
				if (matrix[i][j] == 1)
					count++;
				if (matrix[i][j] == 0 || j+1==N)
				{
					if (count == K)
						result++;
					count = 0;
				}
			}
		}

		//세로행에서 단어가 들어갈 공간 찾기
		for (int i = 0; i < N; i++)
		{
			int count = 0;
			for (int j = 0; j < N; j++)
			{
				if (matrix[j][i] == 1)
					count++;
				if (matrix[j][i] == 0|| j + 1 == N)
				{
					if (count == K)
						result++;
					count = 0;
				}
			}
		}

		cout << "#" << t << " " << result<<endl;
	}
}