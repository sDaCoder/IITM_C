#include <stdio.h>

void main(){
    double price, sum = 0;
    char prompt;

    do
    {
        scanf("%lf", &price);
        scanf(" %c", &prompt);
        sum = sum + price;
    } while (prompt == 'y');
    
    printf("%.2lf", sum);
    
}