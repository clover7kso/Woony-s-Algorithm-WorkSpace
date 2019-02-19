#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <iomanip>
using namespace std;

bool compare(pair<int, float> a, pair<int, float> b)
{
	return a.second > b.second;
}


int main()
{
	int testCase;
	cin >> testCase;
	for (int t = 1; t <= testCase; t++)
	{
		int N;
		int K;
		cin >> N;
		cin >> K;
		vector<pair<int, float>> mClass;
		for (int i = 0; i < N; i++)
		{
			float midTest;
			float finalTest;
			float homeWork;
			cin >> midTest;
			cin >> finalTest;
			cin >> homeWork;
			midTest = midTest / 100 * 35;
			finalTest = finalTest / 100 * 45;
			homeWork = homeWork/ 100 * 20;

			float sum = midTest + finalTest + homeWork;
			mClass.push_back(make_pair(i + 1, sum));
		}
		sort(mClass.begin(), mClass.end(), compare);
		
		int i;
		for (i = 0; i < N; i++)
		{
			if (mClass[i].first == K)
				break;
		}
		char grade[3];
		if (i < N / 10)
			strncpy(grade, "A+", 2);
		else if (i < N / 10 *2)
			strncpy(grade, "A0", 2);
		else if (i < N / 10 * 3)
			strncpy(grade, "A-", 2);
		else if (i < N / 10 * 4)
			strncpy(grade, "B+", 2);
		else if (i < N / 10 * 5)
			strncpy(grade, "B0", 2);
		else if (i < N / 10 * 6)
			strncpy(grade, "B-", 2);
		else if (i < N / 10 * 7)
			strncpy(grade, "C+", 2);
		else if (i < N / 10 * 8)
			strncpy(grade, "C0", 2);
		else if (i < N / 10 * 9)
			strncpy(grade, "C-", 2);
		else if (i < N / 10 * 10)
			strncpy(grade, "D0", 2);
		grade[2] = '\0';
		cout << "#" << t << " " << grade << endl;
	}
}