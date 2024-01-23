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
//DYNAMIC_DRILLERS
//SUST CSE 21
//Thank you everyone!
