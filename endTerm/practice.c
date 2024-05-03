#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

void main()
{
    system("cls");
    char *s = "Hello C Programming !!";
    char *p = s + 6;
    char *q = "C Programming !!";
    // puts(p);

    // if(strcmp(p,q)==0) printf("Matched");
    // else printf("Not Matched");

    unsigned int mask = 0x0A;
    unsigned int x = 0xDBA5;

    for (int i = 0; i < 4; i++)
    {
        x |= mask;
        mask <<= 4;
    }
    printf("%X", x);
}