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
    int a;
    int posx, posy;
    posx = 3, posy = 3;
    double angle = 0;
    int length = 0;


    while (angle < 360)
    {
        int y, x;

        x = cos(angle * PI / 180.0);
        if (x)
            length = -5;
        else
            length = 0;
        y = sin(angle * PI / 180.0);
        for(a=1;)
              while (length < 5)
              {
                posx += x;
                posy += y;
                moveCursor(posx, posy);
                length++;
              }
           }
        angle += 90;
    }
    // ������� �ڵ带 �ۼ��ϼ���----------------------   
    moveCursor(10, 20);
    return 0;
}
