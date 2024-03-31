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

    // end of solution
}

void print_array2d(Array2D *a)
{
    // print the inverted array
    // solution

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
