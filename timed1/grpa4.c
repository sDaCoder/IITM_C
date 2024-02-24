#include <stdio.h>

int tot_int(int a, int b)
{
    int count = 0;
    for (int i = a; i <= b; i++)
    {
        if (((i%3 == 0)||(i%5 == 0))&&(i%15 != 0))
        {
            count++;
        }
        
    }
    return count;
}

void main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d", tot_int(a, b));
}