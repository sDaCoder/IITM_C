#include<stdio.h>

void pattern1(int n)
{
    int a;
    for (int i = 1; i <= n; i++)
    {
        a = i;
        for (int j = 1; j <= i; j++)
        {
            printf("%d", a);
            a--;
        }
        printf("\n");
    }
}

void pattern2(int n)
{
    int a;
    for (int i = 1; i <= n; i++)
    {
        a = n - i + 1;
        for (int j = 1; j <= n; j++)
        {
            if (i+j <= n+1)
            {
                printf("%d", a);
                a--;    
            }
        }
        printf("\n");
    }
}

void print_pattern(int n)
{
    pattern1(n);
    pattern2(n-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    print_pattern(n);
    return 0;
}