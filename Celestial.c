#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<windows.h>

int board[26][76], planeMove, bombY, bombX, bombOn = 0;
int blockOn = 0, blockY, blockX, score = 0;

void clscreen();
void cursor(int row, int col);
void playBoomSound();
void playBlockHitSound();

void setConsoleColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

void setCellValue(int planeRow, int col, char val){
    cursor(planeRow, col);
    printf("%c", val);
}	
void clearPlane(){
    board[planeMove][3] = 1;

    board[planeMove + 1][3] = 0;
    board[planeMove + 1][4] = 0;

    board[planeMove + 2][3] = 0;
    board[planeMove + 2][4] = 0;
    board[planeMove + 2][5] = 0;

    board[planeMove + 3][3] = 0;
    board[planeMove + 3][4] = 0;

    board[planeMove + 4][3] = 0;

    setCellValue(planeMove, 3, ' ');

    setCellValue(planeMove + 1, 3, ' ');
    setCellValue(planeMove + 1, 4, ' ');

    setCellValue(planeMove + 2, 3, ' ');
    setCellValue(planeMove + 2, 4, ' ');
    setCellValue(planeMove + 2, 5, ' ');

    setCellValue(planeMove + 3, 3, ' ');
    setCellValue(planeMove + 3, 4, ' ');

    setCellValue(planeMove + 4, 3, ' ');
}

void Plane() {
    setConsoleColor(12);
    board[planeMove][3] = 1;

    board[planeMove + 1][3] = 1;
    board[planeMove + 1][4] = 1;

    board[planeMove + 2][3] = 1;
    board[planeMove + 2][4] = 1;
    board[planeMove + 2][5] = 1;

    board[planeMove + 3][3] = 1;
    board[planeMove + 3][4] = 1;

    board[planeMove + 4][3] = 1;

    setCellValue(planeMove, 3, '*');

    setCellValue(planeMove + 1, 3, '*');
    setCellValue(planeMove + 1, 4, '*');

    setCellValue(planeMove + 2, 3, '*');
    setCellValue(planeMove + 2, 4, '*');
    setCellValue(planeMove + 2, 5, '*');

    setCellValue(planeMove + 3, 3, '*');
    setCellValue(planeMove + 3, 4, '*');

    setCellValue(planeMove + 4, 3, '*');

}
//DYNAMIC_DRILLERS
//SUST CSE 21
//Thank you everyone!
