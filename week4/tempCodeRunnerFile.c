#include <stdio.h>

int check(int n)
{
    int isPrime = 1;

    if (n < 0)
    {
        n = -n;
    }
    
    for (int i = 2; i*i < n; i++)
    {
        if (n%i == 0)
        {
            isPrime = 0;
        }
        
    }
    
    if (isPrime)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
    
}

void main(){
    int n;
    scanf("%d", &n);
    
    if (check(n))
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }
    
    
}