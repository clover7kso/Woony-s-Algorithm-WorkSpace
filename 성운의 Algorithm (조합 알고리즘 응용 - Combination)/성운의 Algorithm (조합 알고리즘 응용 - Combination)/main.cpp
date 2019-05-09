#include <iostream>
using namespace std;

void print(int *arr, int index)
{
	for (int i = 0; i < index; i++)
		cout << arr[i];
	cout << endl;
}

void combination(int * arr, int index, int n, int r, int target)
{
	if (r == 0) print(arr, index);
	else if (target == n) return;
	else {
		arr[index] = target;
		combination(arr,index+1,n,r-1,target+1);
		combination(arr,index,n,r,target+1);
	}
}

int main(void)
{
	int arr[5]; 
	combination(arr, 0, 5, 3, 0);

}