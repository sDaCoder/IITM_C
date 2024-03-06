#include <stdio.h>

void bigEnd(unsigned int n)
{
    char* c = (char*)(&n);
    int size = sizeof(n);

    for (int i = (size-1); i >= 0; i--)
    {
        printf("%02X\n", (unsigned char)c[i]);
    }
    
}

int main() 
{
    unsigned int a; 
    scanf("%08X", &a);
    bigEnd(a);
    return 0;
}