#include <stdio.h>
//Write Solution code below

void factorial(int* a, int* b)
{
    int f = 1;
    for (int i = 1; i <= *a; i++)
    {
        f = f*i;
    }
    *b = f;
}

int main() 
{
    int a, b;
    scanf("%d", &a);    
    factorial(&a, &b);    
    printf("%d", b);    
    return 0;
}
