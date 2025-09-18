#include<stdio.h>
struct Author {
    char name[100];
    int year;
};
struct Book{
    char title[100];
    int price;
    struct Author author;
};

int main(void)
{
    struct Book book1;
    struct Book book2;
    scanf("%s %d %s %d",book1.title, &book1.price, book1.author.name, &book1.author.year);
    scanf("%s %d %s %d",book2.title, &book2.price, book2.author.name, &book2.author.year);

    if (book1.price < book2.price)
    {
        printf("%s %d %s %d",book1.title, book1.price, book1.author.name, book1.author.year);
    }
    else{
        printf("%s %d %s %d",book2.title, book2.price, book2.author.name, book2.author.year);
    }
}
