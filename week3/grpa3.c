#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sum_of_digits(int num)
{
    int d1 = num/1000;
    int d2 = (num%1000)/100;
    int d3 = (num%100)/10;
    int d4 = (num%10);
    return (d1 + d2 + d3 + d4);
}

void main(){
    system("cls");
    int num = 5426;

    int d1 = num/1000;
    int d2 = (num%1000)/100;
    int d3 = (num%100)/10;
    int d4 = (num%10);
    int sum = (d1 + d2 + d3 + d4);
    printf("%d", sum);
}