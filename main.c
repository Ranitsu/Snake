#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int score = 125;
int food[2];

int main()
{
    food[0] = 16;
    food[1] = 13;

    DrawGame(score);
    gotoxy(food[0], food[1]);
    printf("O");

    gotoxy(0,23);
    return 0;
}

void DrawGame(int score)
{
    printf("######################################################\n");
    printf("# SNAKE by Adam Zegadlo                   SCORE: %3d #\n", score);
    printf("######################################################\n");
    printf("#                                                    #\n");
    printf("#                                                    #\n");
    printf("#                                                    #\n");
    printf("#                                                    #\n");
    printf("#                                                    #\n");
    printf("#                                                    #\n");
    printf("#                                                    #\n");
    printf("#                                                    #\n");
    printf("#                                                    #\n");
    printf("#                                                    #\n");
    printf("#                                                    #\n");
    printf("#                                                    #\n");
    printf("#                                                    #\n");
    printf("#                                                    #\n");
    printf("#                                                    #\n");
    printf("#                                                    #\n");
    printf("#                                                    #\n");
    printf("#                                                    #\n");
    printf("#                                                    #\n");
    printf("######################################################\n");
}

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}
