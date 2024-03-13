#include <stdio.h>

int max_index(int arr[], int size)
{
    // Write function definition below
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[index] <= arr[i])
        {
            index = i;
        }
    }
    return index;
}

int main()
{
    int N;
    scanf("%d", &N);

    int arr[20];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    int maxIndex = max_index(arr, N);
    printf("%d\n", maxIndex);
    return 0;
}