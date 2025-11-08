//3.	Create a Book structure containing book_id, title, author name and price.
// Write a C program to pass a structure as a function argument and print the book details.
#include<stdio.h>
struct Book{
    int book_id;
    char title[50];
    char authorname[50];
    int price;

};
void displayBook(struct Book b){
    printf("Book id:%d\n",b.book_id);
    printf("Title:%s\n",b.title);
    printf("Author Name:%s\n",b.authorname);
    printf("Price=%d\n",b.price);
}

int main(){
    struct Book b1;
    printf("Enter book ID:");
    scanf("%d",&b1.book_id);

    printf("Enter Title");
    scanf("%s",b1.title);

    printf("Enter author name:");
    scanf("%s",b1.authorname);

    printf("Enter Price:");
    scanf("%d",&b1.price);

    displayBook(b1);

    return 0;
}