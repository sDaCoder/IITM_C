#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

enum Level
{
    A = 5,
    B,
    C
};

// struct Random
// {
//     int num1;
//     short int num2;
//     short int num3;
// };

struct Random
{
    int a;
    int b;
};


void main(){
    enum Level myVar = B;
    // printf("%d", myVar);
    // printf("%d", sizeof(struct Random));
    struct random a = {1, 2};
    printf("%d %d", a.a, a.b);
}