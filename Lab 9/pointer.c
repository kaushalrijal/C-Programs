#include <stdio.h>

struct book
{
    char name[100];
    int price;
};

void input(struct book *);
void print(struct book *);

int main()
{
    struct book book1;

    input(&book1);
    printf("The name of the book is %s", book1.name);
    print(&book1);
    return 0;
}

void input(struct book *book1)
{
    printf("Enter the name of book: ");
    scanf("%s", &book1->name);
    printf("Enter the price of the book: ");
    scanf("%d", &book1->price);
}

void print(struct book *book1)
{
    printf("Name = %s\tPrice = %d", book1->name, book1->price);
}