#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[50];
    struct Student *next;
};

struct Student *studentList()
{
    // Hint:
    //  Allocate memory for new struct student
    //  Read name and store inside name field of new struct
    //  Store address of new struct into the next field of the previous student
    //  Write solution code below
    struct Student* head = NULL;
    struct Student* temp = NULL;
    int n = 1;
    while (1)
    {
        struct Student* s = (struct Student*)malloc(sizeof(struct Student));
        scanf("%s", s->name);
        s->next = NULL;

        if(head == NULL) {
            head = s;
            temp = s;
        } else {
            temp->next = s;
            temp = s;
        }
        
        scanf("%d", &n);
        if(n == 0) {
            break;
        }
    }
    
    return head;
}

int main()
{
    struct Student *head;
    head = studentList();
    // Printing a Linked List 👇🏻👇🏻
    while (head != NULL)
    {
        printf("%s\n", head->name);
        head = head->next;
    }
}