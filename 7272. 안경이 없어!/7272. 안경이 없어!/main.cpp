#include <iostream>
#include <string.h>
using namespace std;

bool checkAlpha(char * temp1, char * temp2)
{
	char zeroHole[19] = { 'C', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };
	char oneHole[6] = { 'A', 'D', 'O', 'P', 'Q', 'R' };
	char twoHole = 'B';
	int length1 = strlen(temp1);
	int length2 = strlen(temp2);

	if (length1 != length2)
		return false;
	
	for (int i = 0; i < length1; i++)
	{
		int temp1Alapha;
		int temp2Alapha;
		
		for (int j = 0; j < 19; j++)
		{
			if (zeroHole[j] == temp1[i])
				temp1Alapha = 0;
			if (zeroHole[j] == temp2[i])
				temp2Alapha = 0;
		}

		for (int j = 0; j < 6; j++)
		{
			if (oneHole[j] == temp1[i])
				temp1Alapha = 1;
			if (oneHole[j] == temp2[i])
				temp2Alapha = 1;
		}

		if (twoHole == temp1[i])
			temp1Alapha = 2;
		if (twoHole == temp2[i])
			temp2Alapha = 2;

		if (temp1Alapha != temp2Alapha)
			return false;
	}
	return true;

}

int main(void)
{
	int testCase;
	cin >> testCase;
	for (int t = 1; t <= testCase; t++)
	{
		char temp1[11];
		char temp2[11];
		cin >> temp1;
		cin >> temp2;
		if(checkAlpha(temp1, temp2))
			cout << "#" << t<<" SAME"<<endl;
		else
			cout << "#" << t << " DIFF" << endl;
	}
}