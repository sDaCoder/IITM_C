#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main()
{
    system("cls");
    // printf("Hello world\n");
    unsigned int a = 0x1234ABCD;
    char* b = &a;
    char c;
    c = *(b);
    *(b) = *(b + 1);
    *(b + 1) = c;
    printf("%08X", a);
}