#include <stdio.h>
int main(void)
{
	int i;
	printf("USER INPUT : ");
	scanf("%d", &i);
	for (int z = 0; z <= i; z++)
	{
		if (z%2==0)
		{
			printf("%d\n",z);
		}
	}
}
	