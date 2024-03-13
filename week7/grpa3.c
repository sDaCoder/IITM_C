#include <stdio.h>
#include <stdlib.h>
// Write function below
int findIntersection(int* arr1, int* arr2, int n1, int n2)
{
    int index, common = 0;
    for (int i = 0; i < n1; i++)
    {
        index = i;
        for (int j = 0; j < n2; j++)
        {
            if (arr1[index] == arr2[j])
            {
                common++;
            }   
        }
    }
    return common;
}

int main()
{
    int n1, n2;
    scanf("%d", &n1);

    int* arr1 = (int*)malloc(n1*sizeof(int));
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    scanf("%d", &n2);

    int* arr2 = (int*)malloc(n2*sizeof(int));
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    printf("%d", findIntersection(arr1, arr2, n1, n2));

    return 0;
}