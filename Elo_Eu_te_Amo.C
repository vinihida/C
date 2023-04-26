#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <conio.h>

int main(){
    printf("%d ", rand() % 100);
    int x=rand() % 99;
     char caractere = "color %d ", x;
   system("color %c", caractere);
   while (x<100){
    Sleep(100);
    printf("E");
    Sleep(100);
    printf("L");
    Sleep(100);
    printf("O");
    Sleep(100);
    printf(" ");
    Sleep(100);
    printf("E");
    Sleep(100);
    printf("U");
    Sleep(100);
    printf(" ");
    Sleep(100);
    printf("T");
    Sleep(100);
    printf("E");
    Sleep(100);
    printf(" ");
    Sleep(100);
    printf("A");
    Sleep(100);
    printf("M");
    Sleep(100);
    printf("O\n");
   }
    return 0;
}