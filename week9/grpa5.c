#include <stdio.h>
#include <stdlib.h>
// Write function below

void displayElements(int rows, int cols, int matrix[rows][cols], char type)
{
    switch (type)
    {
    case 'R':
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                printf("%d ", matrix[i][j]);
            }
        }
        break;

    case 'C':
        for (int i = 0; i < cols; i++)
        {
            for (int j = 0; j < rows; j++)
            {
                printf("%d ", matrix[j][i]);
            }
        }
        break;
    
    default:
        break;
    }
}

int main()
{
    int N, M;
    char type;
    scanf("%d %d %c", &N, &M, &type);
    int matrix[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    displayElements(N, M, matrix, type);
    return 0;
}