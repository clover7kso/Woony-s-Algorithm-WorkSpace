#include <iostream>
using namespace std;

int main(void)
{
	char headLine[81];
	cin >> headLine;
	for (int i = 0; i < 81; i++)
	{
		if (headLine[i] == '\0')
			break;
		if (headLine[i] >= 'a')
			cout << (char)(headLine[i] - ('a' - 'A'));
		else 
			cout << (char)headLine[i];
	}
}