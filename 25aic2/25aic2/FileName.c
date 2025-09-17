#include <stdio.h>
#include <Windows.h>

void gotoxy(int x, int y)
{
    COORD pos = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main()
{
    int x = 1, y = 1;
    int d = 0;
    int count = 0;

    while (d < 4)
    {
        gotoxy(x, y);
        printf("*");
        count++;

        if (d == 0) x++;
        else if (d == 1) y++;
        else if (d == 2) x--;
        else if (d == 3) y--;

        if (count == 4) {
            d++;
            count = 0;
        }
    }
    gotoxy(10, 10);
    printf(" ");
    return 0;
}
