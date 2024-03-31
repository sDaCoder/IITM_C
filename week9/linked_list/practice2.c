#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct Insertion
{
    int data;
    struct Insertion *next;
}In;

void traverse(In* ptr){
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);        
        ptr = ptr->next;
    }
}

void append(In** head, int data)
{
    In* ptr = (In*)malloc(sizeof(In));
    ptr->data = data;
    ptr->next = NULL;

    if (*head == NULL)
    {
        *head = ptr;
    }
    else
    {
        In* p = *head;  //* Temporary Pointer p is created
        while(p->next != NULL){
            p = p->next;
        }
        p->next = ptr;
        //* Break the connection between p and NULL by assigning p->next to the new pointer. That is, p->next = ptr.
    }
}

void main(){
    system("cls");
    In* head = NULL;
    int prompt, data;
    while (1)
    {
        scanf("%d", &data);
        append(&head, data);
        scanf("%d", &prompt);
        if (!prompt)
        {
            break;
        }
    }
        
    
    
    traverse(head);
}