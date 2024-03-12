#include <stdio.h>

void findDimensions(int area) 
{
    for (int i = 1; i*i < area; i++)
    {
        if (area%i == 0)
        {
            printf("%d,%d\n", i, area/i);
        }
    }
}

int main(){
    int Area;
    scanf("%d", &Area);
    findDimensions(Area);
    return 0; 
}