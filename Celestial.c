#include<stdio.h>
#include <time.h>
#include<windows.h>
int G[26][76],X[452],Y[452],planeMove,bombY,bombX,bombOn=0;

void Plane(){
    G[planeMove][3] = 1;

    G[planeMove+1][3] = 1;
    G[planeMove+1][4] = 1;

    G[planeMove+2][3] = 1;
    G[planeMove+2][4] = 1;
    G[planeMove+2][5] = 1;

    G[planeMove+3][3] = 1;
    G[planeMove+3][4] = 1;

    G[planeMove+4][3] = 1;
}

void Bomb(){
    G[bombX][bombY] = 2;
    G[bombX][bombY-1] = 1;
    G[bombX][bombY-2] = 1;
}


