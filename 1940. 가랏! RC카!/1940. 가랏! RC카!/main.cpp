#include <iostream>
using namespace std;

int main(void)
{
	int testCase;
	cin >> testCase;

	for (int t = 1; t <= testCase; t++)
	{
		int n_command;
		cin >> n_command;

		int velocity=0;
		int meter = 0;
		for (int i = 0; i < n_command; i++)
		{
			int command;
			cin >> command;
			if (command == 0)
				meter += velocity;
			else if (command == 1)
			{
				int temp;
				cin >> temp;
				velocity += temp;
				meter += velocity;
			}
			else if (command == 2)
			{
				int temp;
				cin >> temp;
				velocity -= temp;				if (velocity < 0)
					velocity = 0;
				meter += velocity;
			}
		}
		cout << "#" << t << " " << meter << endl;
	}
}