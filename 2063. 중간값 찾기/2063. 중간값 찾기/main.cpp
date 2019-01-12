#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int N;
	cin >> N;
	vector<int> in;

	for (int i = 0; i < N; i++)
	{
		int temp; cin >> temp;
		in.push_back(temp);
	}

	sort(in.begin(), in.end());

	cout << in[N / 2];
}