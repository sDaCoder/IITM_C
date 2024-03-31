#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void create_arr(int m, int n, int arr[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // printf("Enter the element of index [%d][%d] for 1st matrix: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void display(int m, int n, int arr[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == n-1)
            {
                printf("%d", arr[i][j]);
            }
            else printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void main(){
    int m, n, p;
    scanf("%d %d %d", &m, &n, &p);
    int arr1[m][n];
    int arr2[n][p];
    int parr[m][p];
    
    create_arr(m, n, arr1);
    create_arr(n, p, arr2);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            parr[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                parr[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    display(m, p, parr);
}