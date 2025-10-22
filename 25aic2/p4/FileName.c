#include<stdio.h>

int LSR_Gassp(int gender)
{
	Gender = 1;
printf("LSR 교수님은 게이");
return 0;
}

int wife(int *gender)
{
	Gender[0] = 1;
printf("게이");
return 0;
}

int main()
{
	int* ES_maum;
	ES_maum = (int*)malloc(sizeof(int)*2);

	//0성별 1애인
	ES_maum[0] = 0;
	ES_maum[1] = 1;

	LSR_Gassp(ES_maum[0]);

	if (ES_maum[0] == 1)
		printf("그는 게이였다");
	else if (ES_maum[0] == 0)
		printf("그는 여성을 사랑");
	else if (ES_maum[1] == 1)
		printf("그는 사랑");
	else if (ES_maum[1] == 0)
		printf("그는 에휴 됐습니다");

	free(ES_maum);
	return 0;
}