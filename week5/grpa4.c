#include <stdio.h>

//Write Code below
int check(int n)
{
    int isPrime = 1;

    if (n < 0)
    {
        n = -n;
    }
    
    if (n == 1)
    {
        isPrime = 0;
    }
    
    else
    {
        for (int i = 2; i*i <= n; i++)
        {
            if (n%i == 0)
            {
                isPrime = 0;
                break;
            }
            
        }
    }
    
    
    return isPrime;
}
    
int prime_sum(int p, int q)
{
    int sum = 0;
    for (int i = p; i <= q; i++)
    {
        if (check(i) == 1)
        {
            sum = sum + i;
        }
        
    }
    return sum;
}
    
int main() 
{
    int p,q;
    scanf("%d",&p);
    scanf("%d",&q);
    printf("%d",prime_sum(p,q));
    return 0;
}