#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getPoint(vector<int>temp)
{
	int countArray[9] = {0};
	int count = 0;
	if (temp.size() >= 3)
	{
		for (int i = 0; i < temp.size(); i++)
			countArray[temp[i]-1]++;
		
		for (int i = 0; i < 9; i++)
		{
			if (countArray[i] >= 3)
			{
				countArray[i] -= 3;
				count++;
			}
		}

		for (int i = 0; i < 7; i++)
		{
			while (countArray[i] >= 1 && countArray[i + 1] >= 1 && countArray[i + 2] >= 1)
			{
				countArray[i] -= 1;
				countArray[i+1] -= 1;
				countArray[i+2] -= 1;
				count++;
			}
		}
	}
	return count;
}


int main(void)
{
	int testCase;
	cin >> testCase;
	for (int t = 1; t <= testCase; t++)
	{
		vector<int> RED;
		vector<int> BLUE;
		vector<int> GREEN;
		
		int number;
		char color[10];
		cin >> number;
		cin >> color;
		int pos = 100000000;
		for (int i = 0; i < 9; i++) {
			int temp=number/pos;
			number -= temp * pos;
			pos = pos / 10;
			if (color[i]== 'R')
				RED.push_back(temp);
			else if (color[i] == 'B')
				BLUE.push_back(temp);
			else if (color[i] == 'G')
				GREEN.push_back(temp);
		}

		int count = 0;
		if (RED.size() % 3 == 0 && BLUE.size() % 3 == 0 && GREEN.size() % 3 == 0)
		{
			count += getPoint(RED);
			count += getPoint(BLUE);
			count += getPoint(GREEN);
			if (count >= 3)
				cout << "#" << t << " Win" << endl;
			else
				cout << "#" << t << " Continue" << endl;
		}
		else
			cout << "#" << t << " Continue" << endl;

	}
}