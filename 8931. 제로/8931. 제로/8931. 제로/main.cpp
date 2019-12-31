#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int testCase = 0;
	cin >> testCase;
	for (int t = 0; t < testCase; t++)
	{
		vector<int> mArray;
		int k;
		cin >> k;
		for (int i = 0; i < k; i++)
		{
			int temp;
			cin >> temp;
			if (temp!=0)
				mArray.push_back(temp);
			else
				mArray.pop_back();
		}
		int sum=0;
		for (int i = 0; i < mArray.size(); i++)
			sum+=mArray[i];		
		cout << "#" << t + 1 << " " << sum << endl;
		
	}
}