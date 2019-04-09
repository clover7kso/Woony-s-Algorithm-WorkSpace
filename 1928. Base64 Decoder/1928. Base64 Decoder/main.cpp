#include <iostream>
using namespace std;
char find(char input);

int main(void)
{
	int testCase;
	cin >> testCase;
	for (int t = 1; t <= testCase; t++)
	{
		char buffer[4];
		char Base64Encoding[100000];
		cin >> Base64Encoding;
		int temp = 0;

		cout << "#" << t << " ";
		while (Base64Encoding[temp] != '\0')
		{
			for (int i = 0; i < 4; i++)
			{
				buffer[i] = find(Base64Encoding[temp]);
				temp++;
			}
			
			char transfer[4];
			transfer[0] = buffer[0] << 2;
			transfer[0] = transfer[0] + (buffer[1]>>4);
			transfer[1] = buffer[1] << 4;
			transfer[1] = transfer[1] + (buffer[2] >> 2);
			transfer[2] = buffer[2] << 6;
			transfer[2] = transfer[2] + (buffer[3]);
			transfer[3] = '\0';
			cout << transfer;
		}
		cout << endl;
	}
}

char find(char input)
{
	const char alapha[64] = {
		'A','B','C','D','E','F','G','H',
		'I','J','K','L','M','N','O','P',
		'Q','R','S','T','U','V','W','X',
		'Y','Z','a','b','c','d','e','f',
		'g','h','i','j','k','l','m','n',
		'o','p','q','r','s','t','u','v',
		'w','x','y','z','0','1','2','3',
		'4','5','6','7','8','9','+','/'
	};
	for (int i = 0; i < 64; i++)
	{
		if (input == alapha[i])
			return i;
	}
}