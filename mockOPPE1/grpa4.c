#include <stdio.h>
#include <stdlib.h>
//Write solution code below

void findLeaders(int* arr, int n)
{
    int count = 0;
    for (int j = 0; j < n-1; j++)
    {
        int index = j, isLead = 1;
        for (int i = (j + 1); i < n; i++)
        {
            if (arr[index] < arr[i])
            {
                isLead = 0;
            }
        }
        if (isLead)
        {
            printf("%d\n", arr[index]);
            count++;
        }
    }
    if (count == 0)
    {
        printf("None");
    }
    

    // for (int i = 0; i < n; i++) {
    //     int j;
    //     for (j = i + 1; j < n; j++) {
    //         if (arr[i] <= arr[j])
    //             break;
    //     }
    //     if (j == n)
    //         printf("%d ", arr[i]);
    // }
}
    
    

int main()
{
    int n;
    scanf("%d",&n);
    int* arr = (int*)malloc(n*sizeof(int));

    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }       

    findLeaders(arr,n);
    return 0;
}