#include <stdio.h>
#include <stdlib.h>

int main(){
    float num_1, num_2, x, y;
    num_1 = 14.8; 
    num_2 = 3.5;
    y = (num_1 + num_2)/2;
    x = (num_1 - y);
    printf("X + Y = %.1f\n", num_1);
    printf("X - Y = %.1f\n", num_2);
    printf("Valor de Y = %.2f\n", y);
    printf("Valor de X = %.2f\n", x);
    /* 
        X + Y = 14.8 
        X - Y = 3.5
        X = 14.8 - Y
        14.8 - Y - Y = 3.5
        14.8 - 2Y = 3.5
        Y = 14.8 + 3.5/2
        
        Y = 9.15

        X + 9.15 = 14.8
        X = 14.8 - 9.15
        
        X = 5.65
        */ 
    
    return 0;
}