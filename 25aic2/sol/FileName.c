#include <stdio.h>
#include <math.h>
#include <Windows.h>

#define PI 3.14159226535897

void moveCursor(int x, int y)
{
    printf("\x1b[%d;%dH", y, x);
}

//�Ű����� isExploded
//0: ������ ��ź
//1: ������
void printBomb(int isExploded)
{
    //��ź�� �׻� 7ĭ
    if (isExploded)
    {
        printf("\x1b[A^^^^^^^");
        printf("\x1b[B\x1b[7D!!BAM!!");
        printf("\x1b[B\x1b[7D^^^^^^^");
    }
    else
        printf("(  b  )");
}

int main()
{
    // ������� �ڵ带 �ۼ��ϼ���----------------------   
	int a = 14, b = 9, c = 0, d = 0, e = 0, f = 0, g = 1,h=0;//a: x��ǥ, b: y��ǥ, d: ����, e: �̵�Ƚ��, f: ����, g: 
    moveCursor(14, 9);
    printf("*");
    b++;
    while(g<4)
    {
        while (d < 4)
        {   
            moveCursor(a, b);
            printf("#");
            if (g == 1)
            {
                moveCursor(a, b);
                printf("#");
                e++;

                if (d == 0)//����
                {
                    b++;
                }
                else if (d == 1)
                {
                    a++;
                }
                else if (d == 2)
                {
                    b--;
                }
                else if (d == 3)
                {
                    a--;
                }
                if (d == 2)
                {
                    f = 3;
                }
                if (d == 3)
                {
                    f = 3;
                }

                if (e > f)//ȸ������ ���� d=2�� �� ��ĭ �� �ö󰡾���
                {
                    d++;
                    e = 0;

                    f = f + 1;


                }
            }
            else if (g == 2)
            {
                moveCursor(a, b);
                printf("#");
                e++;

                if (d == 0)//����
                {
                    b++;
                }
                else if (d == 1)
                {
                    a++;
                }
                else if (d == 2)
                {
                    b--;
                }
                else if (d == 3)
                {
                    a--;
                }

                if (e > f)//ȸ������ ���� d=2�� �� ��ĭ �� �ö󰡾���
                {
                    d++;
                    e = 0;

                    f = f + 1;


                }
            }
            else if (g == 3)
            {
                moveCursor(a, b);
                printf("#");
                e++;

                if (d == 0)//����
                {
                    b++;
                }
                else if (d == 1)
                {
                    a++;
                }
                else if (d == 2)
                {
                    b--;
                }
                else if (d == 3)
                {
                    a--;
                }

                if (e > f)//ȸ������ ���� d=2�� �� ��ĭ �� �ö󰡾���
                {
                    d++;
                    e = 0;

                    f = f + 1;


                }
            }
            else if (g == 4)
            {
                moveCursor(a, b);
                printf("#");
                e++;

                if (d == 0)//����
                {
                    b++;
                }
                else if (d == 1)
                {
                    a++;
                }
                else if (d == 2)
                {
                    b--;
                }
                else if (d == 3)
                {
                    a--;
                }

                if (e > f)//ȸ������ ���� d=2�� �� ��ĭ �� �ö󰡾���
                {
                    d++;
                    e = 0;

                    f = f + 1;


                }
                }
        }
        d = 0;
        g++;
    }
    a = a - 6;//��ź ��ġ
    moveCursor(a, b);
    printBomb(0);
    g = 1;
    a = 14, b = 9;
    c = 0;
    h = 0;
    f = 0;//�ʱ�ȭ
    moveCursor(a, b);
    printf(" ");
    b++;
    while (g < 4)//�ݺ�
    {
        while (d < 4)//����
        {
            if(g==1)
            {
                Sleep(200);
                moveCursor(a, b);
                printf("*");
                Sleep(100);
                moveCursor(a, b);
                printf(" ");

                e++;

                if (d == 0)//����
                {
                    b++;
                }
                else if (d == 1)
                {
                    a++;
                }
                else if (d == 2)
                {
                    b--;
                }
                else if (d == 3)
                {
                    a--;
                }
                if (d == 2)
                {
                    f=3;
                }
                if (d == 3)
                {
                    f = 3;
                }

                if (e > f)//ȸ������ ���� d=2�� �� ��ĭ �� �ö󰡾���
                {
                    d++;
                    e = 0;

                    f = f + 1;


                }
            }
            else if(g==2)
            {
                Sleep(200);
                moveCursor(a, b);
                printf("*");
                Sleep(100);
                moveCursor(a, b);
                printf(" ");

                e++;

                if (d == 0)//����
                {
                    b++;
                }
                else if (d == 1)
                {
                    a++;
                }
                else if (d == 2)
                {
                    b--;
                }
                else if (d == 3)
                {
                    a--;
                }

                if (e > f)//ȸ������ ���� d=2�� �� ��ĭ �� �ö󰡾���
                {
                    d++;
                    e = 0;

                    f = f + 1;


                }
            }
            else if (g == 3)
            {
                Sleep(200);
                moveCursor(a, b);
                printf("*");
                Sleep(100);
                moveCursor(a, b);
                printf(" ");

                e++;

                if (d == 0)//����
                {
                    b++;
                }
                else if (d == 1)
                {
                    a++;
                }
                else if (d == 2)
                {
                    b--;
                }
                else if (d == 3)
                {
                    a--;
                }

                if (e > f)//ȸ������ ���� d=2�� �� ��ĭ �� �ö󰡾���
                {
                    d++;
                    e = 0;

                    f = f + 1;


                }
            }
            else if (g == 3)
            {
                Sleep(200);
                moveCursor(a, b);
                printf("*");
                Sleep(100);
                moveCursor(a, b);
                printf(" ");

                e++;

                if (d == 0)//����
                {
                    b++;
                }
                else if (d == 1)
                {
                    a++;
                }
                else if (d == 2)
                {
                    b--;
                }
                else if (d == 3)
                {
                    a--;
                }

                if (e > f)//ȸ������ ���� d=2�� �� ��ĭ �� �ö󰡾���
                {
                    d++;
                    e = 0;

                    f = f + 1;


                }
            }
        }
        d = 0;
        g++;//3qjsqksqhr
    }
    a = a - 6;
    moveCursor(a, b);
    printBomb(1);


    // ������� �ڵ带 �ۼ��ϼ���----------------------   
    moveCursor(10, 20);
    return 0;
}
