#include <stdio.h>
// Write solution code below
struct Data
{
    int num1, num2, op;
};

void calculator(struct Data d) 
{
    switch (d.op){
        case 1:
            printf("%d", (d.num1 + d.num2));
            break;
        
        case 2:
            printf("%d", (d.num1 - d.num2));
            break;
        
        case 3:
            printf("%d", (d.num1 * d.num2));
            break;
        
        case 4:
            if (d.num2 == 0)
            {
                printf("Zero Division Error");
                break;
            }
            else
            {
                printf("%.2f", ((float)d.num1 / (float)d.num2));
                break;    
            }
    }
}

int main()
{
    struct Data data;

    scanf("%d", &data.num1);
    scanf("%d", &data.num2);
    scanf(" %d", &data.op);

    calculator(data);

    return 0;
}