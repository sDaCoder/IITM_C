#include <stdio.h>

void read_integers(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
}

void recursive_f(int arr[], int n) {
    if (n == 0 || n == 1) {
        printf("%d", arr[0]);
        return;
    }
    
    printf("%d\n", arr[n - 1]);
    recursive_f(arr, n - 1);
}

void rev_print(int n) {
    int arr[20];
    read_integers(arr, n);
    recursive_f(arr, n);
}


int main(){
    int n;
    scanf("%d", &n);
    rev_print(n);
    
}