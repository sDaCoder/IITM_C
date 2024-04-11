#include <stdio.h>
#include <stdlib.h>
#define ADD_ONE(x) x + 2
#define DEBUG 0
#define MAX(x, y) x > y ? x : --y

void main(){
    system("cls");
    // int a = 5;
    // printf("%d", ADD_ONE(a)*2);

    int a = 10, b = 10;
    int max_value = MAX(++a, b);
    printf("%d", max_value);

}