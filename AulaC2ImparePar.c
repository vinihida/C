#include <stdio.h>
int main()
{
    int x;
    printf("digite o numero: ");
    scanf("%d", &x);
    if(x % 2 == 0){
        printf("%d e' par \n", x);
    }
    else{
        printf("%d e' impar \n", x);
    }

    return 0;
    }