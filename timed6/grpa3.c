#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int **vals;
    int dim0;
    int dim1;
} Array2D;
Array2D inverted_identity_matrix(int n)
{
    // genarate inverted array of order n
    // solution
    Array2D a;
    a.dim0 = n;
    a.dim1 = n;

    a.vals = (int **)malloc(a.dim0 * sizeof(int *));
    for (int i = 1; i <= a.dim0; i++)
    {
        a.vals[i - 1] = (int*)malloc((a.dim1)*sizeof(int));
        for (int j = 1; j <= a.dim1; j++)
        {
            if (i == j)
            {
                a.vals[i - 1][j - 1] = 0;
            }
            else a.vals[i - 1][j - 1] = 1;
        }
        
    }
    return a;
    // end of solution
}

void print_array2d(Array2D *a)
{
    // print the inverted array
    // solution
    for (int i = 1; i <= a->dim0; i++)
    {
        for (int j = 1; j <= a->dim1; j++)
        {
            printf("%d ", a->vals[i - 1][j - 1]);
        }
        printf("\n");
    }
    
    // end of solution
}
// suffix
void free_array2d(Array2D *a)
{
    for (int i = 0; i < a->dim0; i++)
    {
        free(a->vals[i]);
    }
    free(a->vals);
}

int main()
{
    int n;
    scanf("%d", &n);
    Array2D a = inverted_identity_matrix(n);
    print_array2d(&a);
    free_array2d(&a);
    return 0;
}
