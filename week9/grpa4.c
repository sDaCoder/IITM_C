#include <stdio.h>
// Write function below

int diagonalSum(int N, int matrix[N][N])
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                sum += matrix[i][j];
            }
        }
    }
    return sum;
}

int main()
{
    int N;
    scanf("%d", &N);
    int matrix[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("%d\n", diagonalSum(N, matrix));
    return 0;
}
