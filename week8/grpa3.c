#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// Write Solution code below
struct Book
{
    char title[100];
    char author[100];
    int publication_year;
};

void findBooksPublishedInYear(struct Book* b, int size, int yr)
{
    int mdh = 0;
    for (int i = 0; i < size; i++)
    {
        if (b[i].publication_year == yr)
        {
            printf("%s: %s\n", b[i].title, b[i].author);
            mdh++;
        }
    }
    if (!mdh)
    {
        printf("NONE");
    }
    
}

int main()
{
    int n;
    scanf("%d", &n);
    struct Book* books = (struct Book*)malloc(n* sizeof(struct Book));
    for (int i = 0; i < n; i++)
    {
        scanf("%s", books[i].title);
        scanf("%s", books[i].author);
        scanf("%d", &books[i].publication_year);
    }
    int searchYear;
    scanf("%d", &searchYear);
    findBooksPublishedInYear(books, n, searchYear);

    return 0;
}