#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct NODE
{
    char name[50];
    struct NODE* next;
}NODE;

void append(char data[50], NODE** start)
{
    NODE* ptr = (NODE*)malloc(sizeof(NODE));
    strcpy(ptr->name, data);
    ptr->next = NULL;

    if (*start == NULL)
    {
        *start = ptr;
    }
    else
    {
        NODE* p = *start;
        while(p->next != NULL){
            p = p->next;
        }
        p->next = ptr;
        //* Break the connection between p and NULL by assigning p->next the new pointer. That is, p->next = ptr.
    }
}
    
void traverse(NODE* ptr){
    while (ptr != NULL)
    {
        printf("%s  ", ptr->name);
        ptr = ptr->next;
    }
}

NODE* listing()
{
    NODE* H = NULL;
    int prompt;
    char data[50];
    while (1)
    {
        gets(data);
        append(data, &H);
        scanf("%d", &prompt);
        if (!prompt)
        {
            break;
        }
    }
    return H;
}

void main(){
    system("cls");
    NODE* head;
    head = listing();
    traverse(head);
}