#include <stdio.h>
#include <math.h>
#include <Windows.h>

#define PI 3.14159226535897

void moveCursor(int x, int y)
{
    printf("\x1b[%d;%dH", y, x);
}

//매개변수 isExploded
//0: 폭발전 폭탄
//1: 폭발함
void printBomb(int isExploded)
{
    //폭탄은 항상 7칸
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
    // 여기부터 코드를 작성하세요----------------------   
	int a = 14, b = 9, c = 0, d = 0, e = 0, f = 0, g = 1,h=0;//a: x좌표, b: y좌표, d: 방향, e: 이동횟수, f: 길이, g: 
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

                if (d == 0)//방향
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

                if (e > f)//회전마다 길이 d=2일 때 한칸 더 올라가야함
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

                if (d == 0)//방향
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

                if (e > f)//회전마다 길이 d=2일 때 한칸 더 올라가야함
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

                if (d == 0)//방향
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

                if (e > f)//회전마다 길이 d=2일 때 한칸 더 올라가야함
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

                if (d == 0)//방향
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

                if (e > f)//회전마다 길이 d=2일 때 한칸 더 올라가야함
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
    a = a - 6;//폭탄 위치
    moveCursor(a, b);
    printBomb(0);
    g = 1;
    a = 14, b = 9;
    c = 0;
    h = 0;
    f = 0;//초기화
    moveCursor(a, b);
    printf(" ");
    b++;
    while (g < 4)//반복
    {
        while (d < 4)//방향
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

                if (d == 0)//방향
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

                if (e > f)//회전마다 길이 d=2일 때 한칸 더 올라가야함
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

                if (d == 0)//방향
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

                if (e > f)//회전마다 길이 d=2일 때 한칸 더 올라가야함
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

                if (d == 0)//방향
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

                if (e > f)//회전마다 길이 d=2일 때 한칸 더 올라가야함
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

                if (d == 0)//방향
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

                if (e > f)//회전마다 길이 d=2일 때 한칸 더 올라가야함
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


    // 여기까지 코드를 작성하세요----------------------   
    moveCursor(10, 20);
    return 0;
}
