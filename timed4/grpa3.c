#include <stdio.h>
#include <stdlib.h>

void rightCircularShift(int arr[], int N, int k)
{
    // Write Solution code
    int* temp = (int*)malloc(N*sizeof(int));
    for (int i = 0; i < N; i++)
    {
        temp[i] = arr[i];
    }
    
    for (int i = 0; i < N; i++)
    {
        arr[(i+k)%N] = temp[i];
        
    }
    
}

int main()
{
    int N, k;
    scanf("%d", &N);

    int* arr = (int*)malloc(N*sizeof(int));
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    // Ensure k is within valid range
    if (k < 0 || k > N)
    {
        printf("Invalid input for k.\n");
        return 1;
    }

    rightCircularShift(arr, N, k);

    // Print the shifted array
    for (int i = 0; i < N; i++)
    {
        printf("%d", arr[i]);
        if (i < N - 1)
        {
            printf(" ");
        }
    }

    return 0;
}