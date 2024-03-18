#include <stdio.h>
#include <stdlib.h>
// Write solution code below

int isIncreasing(int* arr, int size)
{
    int check;
    if (size == 1)
    {
        return 1;
    }
    
    for (int i = 0; i < (size-1); i++)
    {
        if (arr[i] < arr[i+1])
        {
            check = 1;
        }
        else{
            check = 0;
            break;
        }
    }
    return check;
}

int main()
{
    int size, res;
    scanf("%d", &size);

    int* arr = (int*)malloc(size*sizeof(int));
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    res = isIncreasing(arr, size);
    if (res == 1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0;
}
