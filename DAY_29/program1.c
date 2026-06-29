// Write a program to Create library management system.
#include <stdio.h>
#include <string.h>
struct Library
{
    int id;
    char name[50];
    char author[50];
};
int main(){
    struct Library b[100];
    int n, i;
    printf("Enter number of books: ");
    scanf("%d", &n);

    getchar();

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Enter Book ID: ");
        scanf("%d", &b[i].id);

        getchar();

        printf("Enter Book Name: ");
        fgets(b[i].name, sizeof(b[i].name), stdin);
        b[i].name[strcspn(b[i].name, "\n")] = '\0';

        printf("Enter Author Name: ");
        fgets(b[i].author, sizeof(b[i].author), stdin);
        b[i].author[strcspn(b[i].author, "\n")] = '\0';
    }

    printf("\nLIBRARY   RECORDS :  \n");

    for(i = 0; i < n; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("Book ID     : %d\n", b[i].id);
        printf("Book Name   : %s\n", b[i].name);
        printf("Author Name : %s\n", b[i].author);
    }

    return 0;
}