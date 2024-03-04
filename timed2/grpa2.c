#include<stdio.h>
//Write function below
void print_xo_pattern(int n)
{
    if (n < 1)
    {
        printf("INVALID");
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                if (j%2 == 0)
                {
                    printf("o");
                }
                else printf("x");
            }
            printf("\n");
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    print_xo_pattern(n);
    return 0;
}