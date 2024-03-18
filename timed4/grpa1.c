#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int count_even(int* arr)
{
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]%2 == 0)
        {
            count++;
        }
    }
    return count;
}

void main(){
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("%d", count_even(arr));
}