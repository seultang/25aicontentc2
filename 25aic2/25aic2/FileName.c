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
    int dir = 0;
    int count = 0;

    while (dir < 4)
    {
        gotoxy(x, y);
        printf("*");
        count++;

        if (dir == 0) x++;
        else if (dir == 1) y++;
        else if (dir == 2) x--;
        else if (dir == 3) y--;

        if (count == 4) {
            dir++;
            count = 0;
        }
    }
    gotoxy(10, 10);
    printf(" ");
    return 0;
}
