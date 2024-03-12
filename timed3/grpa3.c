#include <stdio.h>

void store_numbers(int *p, int n)
{
    // Write code below
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &(p[i]));
    }
}

int find_max(int n, int* a)
{
    int index = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[index] < a[i])
        {
            index = i;
        }
        
    }
    return a[index];
}

int main()
{
    int n;
    int a[100];
    scanf("%d", &n);
    store_numbers(&a[0], n);
    printf("%d ", find_max(n, &a[0]));
    return 0;
}