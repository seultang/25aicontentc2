#include<stdio.h>

int LSR_Gassp(int gender)
{
	Gender = 1;
printf("LSR �������� ����");
return 0;
}

int wife(int *gender)
{
	Gender[0] = 1;
printf("����");
return 0;
}

int main()
{
	int* ES_maum;
	ES_maum = (int*)malloc(sizeof(int)*2);

	//0���� 1����
	ES_maum[0] = 0;
	ES_maum[1] = 1;

	LSR_Gassp(ES_maum[0]);

	if (ES_maum[0] == 1)
		printf("�״� ���̿���");
	else if (ES_maum[0] == 0)
		printf("�״� ������ ���");
	else if (ES_maum[1] == 1)
		printf("�״� ���");
	else if (ES_maum[1] == 0)
		printf("�״� ���� �ƽ��ϴ�");

	free(ES_maum);
	return 0;
}