#include <stdio.h>
#include <stdlib.h>

#define ka 97
#define kz 123

int swap(char* a, char* b)
{
	char c;
	c = *a;
	*a = *b;
	*b = c;
	return 0;
}
int main()
{
	char random[kz - ka];
	int i = 0;
	for(i=0;i<kz-kz+1;i++)
	{
		random[i-ka] = 0;
	}
	for (i = 0; i < kz - ka; i++)
	{
		while (1)
		{
			int rand_index = rand() % (kz - ka);
			if (random[rand_index] == 0)
			{
				random[rand_index] = (char)(i + ka);
				break;
			}
		}
	}
	random[0] = 'a';
	random[1] = 'b';

	swap(&random[0], &random[1]);

	printf("\t\trandom\tsort");
	for (i = 0; i < kz - ka+1; i++)
	{
		
	}
}