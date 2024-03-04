#include <stdio.h>
//Write function below

int count_digits(int n, long int d)
{
    int count = 0, rem;
    do
    {
        rem = d%10;
        d = d/10;
        if (rem == n)
        {
            count++;
        }
        
    } while (d > 0);
    
    return count;
}

int main(){
    int d;
    long int n;
    scanf("%d %ld",&d,&n);
    printf("%d",count_digits(d,n));
}