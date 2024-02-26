#include <stdio.h>

// Write code below
int min(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    else return a;
}

int GCD(int a, int b)
{
    int gcd;
    for (int i = 1; i <= min(a, b); i++)
    {
        if ((a%i == 0)&&(b%i == 0))
        {
            gcd = i;
        }
        
    }
    return gcd;
}

int main() 
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d",GCD(a,b));
    return 0;
}