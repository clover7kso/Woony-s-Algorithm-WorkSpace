#include <iostream>
#include <vector>
using namespace std;

int player1[9];
int player2[9];
int player1Win = 0;
int player2Win = 0;

void swap(int * arr, int a, int b)
{
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}

void perm(int * arr, int depth, int n, int k, int p1, int p2)
{
	if (depth == k) {
		//한 사이클마다 할일
		int player1Point = p1;
		int player2Point = p2;
		if (player2Point > player1Point)
			player2Win++;
		else if (player2Point < player1Point)
			player1Win++;
		return;
	}

	for (int i = depth; i < n; i++)
	{
		swap(arr, i, depth);
		if (player1[depth]>player2[depth]) perm(arr, depth + 1, n, k, p1 + player1[depth] + player2[depth], p2);
		else if (player1[depth]<player2[depth]) perm(arr, depth + 1, n, k, p1, p2 + player1[depth] + player2[depth]);
		swap(arr, i, depth);
	}
}

int main(void)
{
	int testCase;
	cin >> testCase;
	for (int t = 1; t <= testCase; t++)
	{
		for (int i = 0; i < 9; i++)
			cin >> player1[i];
		
		int i = 0;
		int j = 1;
		while (i != 9)
		{
			bool flag = false;
			for (int z = 0; z < 9; z++)
			{
				if (player1[z] == j)
					flag = true;
			}
			if (flag == false)
			{
				player2[i] = j;
				i++;
			}
			j++;
		}

		player1Win = 0;
		player2Win = 0;
		
		perm(player2, 0, 9, 9,0,0);

		cout <<"#"<< t<< " "<<player1Win<<" "<<player2Win<<endl;
	}
}