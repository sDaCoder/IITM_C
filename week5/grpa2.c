#include <stdio.h>

// Write code below
int GCD(int a, int b)
{
    int gcd;
    for (int i = 0; ; i++)
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