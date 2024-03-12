#include <stdio.h>
#include <stdlib.h>
//Write function below

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverseArray(int* arr, int n)
{
    for (int start = 0, end = (n-1); start < end; start++, end--)
    {
        swap(&(arr[start]), &(arr[end]));
    }
    
}

int main() 
{
    int n;
    scanf("%d", &n);

    int* arr = (int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, n);

    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}