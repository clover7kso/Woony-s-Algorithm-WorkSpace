#include <iostream>
using namespace std;

void print(int * arr, int k) 
{ 
	for (int i = 0; i < k; i++)
		cout << arr[i]; 
	cout << endl;
}


void swap(int * arr, int i, int j) 
{
	int temp = arr[i]; 
	arr[i] = arr[j];
	arr[j] = temp; 
}


void perm(int * arr, int depth, int n, int k) {
	if (depth == k) { 
		print(arr,k); return; 
	} 
	
	for (int i = depth; i < n; i++) 
	{ 
		swap(arr, i, depth);
		perm(arr, depth + 1, n, k);
		swap(arr, i, depth); 
	} 
}


int main(void)
{
	int arr[] = { 1, 2, 3, 4 }; 
	perm(arr, 0, 4, 4);
}