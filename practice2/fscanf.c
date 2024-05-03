#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

void main(){
    system("cls");
    FILE* ptr = fopen("input.txt", "r");
    int n;
    while (fscanf(ptr, "%d", &n)!=EOF)
    {
        printf("%d\n", n);
    }
    fclose(ptr);
}