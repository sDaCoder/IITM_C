#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void main()
{
    system("cls");
    // int x = 3, y = 5;
    // int z = x * y - x / 2 + 1;
    // printf("%d", z);

    // printf("%d", 1 + 'A');

    int a = 2, b = 3, c;
    c = (a++ == 3) && (--b == 2);
    printf("%d", a + b + c);

    // int a = 2, b = 3, c;
    // c = (++a == 3) || (b-- == 2);
    // printf("%d", a + b + c);

    // int x = 3, y = 5, z;
    // z = !x && y > 2;
    // printf("%d", z);

    // int age = 18, isAdult = 0;
    // isAdult = age = (age >= 18 && isAdult);
    // printf("%d, %d", age, isAdult);
}