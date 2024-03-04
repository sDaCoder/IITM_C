#include <stdio.h>

int power(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    else
    {
        return (power(x, y-1)*x);
    }
    
}

void main(){
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    printf("%d", power(x, y));
}