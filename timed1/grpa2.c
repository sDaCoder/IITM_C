#include <stdio.h>

int GPD(int n)
{
    int gpd;
    for (int i = 1; i < n; i++)
    {
        if (n%i == 0)
        {
            gpd = i;
        }
        
    }
    return gpd;
}

void main(){
    int a;
    scanf("%d", &a);
    printf("%d", GPD(a));
}