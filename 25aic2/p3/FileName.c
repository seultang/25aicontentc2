#include<stdio.h>
int main()
{
	int i=0,j=0;
	int chess[20][8];
	for (j = 0; j < 8; j++)
	{
		for (i = 0; i < 20; i++)
		{
			chess[i][j] = (i + j) % 2;
			printf("%d",chess[i][j]);
		}
		printf("\n");
	}
	printf("\n");
return 0;
}