#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int testCase;
	cin >> testCase;
	
	for (int t = 1; t <= testCase; t++)
	{
		int mNum;
		cin >> mNum;
		bool swich = true;
		
		vector<int> line1;
		vector<int> line2;
		line1.push_back(1);
		line1.push_back(1);
		line1.push_back(0);

		cout << "#" << t << " " << endl;
		cout << 1 << endl;
		for (int i = 0; i < mNum-1; i++)
		{
			if (swich)
			{
				for (int j = 0; j < line1.size(); j++)
				{
					if (line1[j] != 0)
					{
						cout << line1[j] << " ";
						if(line1[j]==1)
							line2.push_back(line1[j]);
						line2.push_back(line1[j] + line1[j + 1]);
					}
				}
				cout << endl;
				line1.clear();
				swich = false;
				line2[line2.size() - 1] = 0;
			}else {
				for (int j = 0; j < line2.size(); j++)
				{
					if (line2[j] != 0)
					{
						cout << line2[j] << " ";
						if (line2[j] == 1)
							line1.push_back(line2[j]);
						line1.push_back(line2[j] + line2[j + 1]);
					}
				}
				cout << endl;
				line2.clear();
				swich = true;
				line1[line1.size() - 1] = 0;
			}
		}
	}
}