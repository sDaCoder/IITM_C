#include <stdio.h>

int sum_n(int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + (i + 1);
    }
    return sum;
}

int series_sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + sum_n(i);
    }
    return sum;
}

void main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", series_sum(n));
}