#include <stdio.h>
// write a C program to pass a structure as a function argument and print the
//book details. 
struct book { 
    char title[50];
    char author[50];
    int pages;
};
int main(){
    struct book B1;
    printf("Enter book title: ");
    scanf("%s", B1.title);
    printf("Enter book author: ");
    scanf("%s", B1.author);
    printf("Enter number of pages: ");
    scanf("%d", &B1.pages);
 printf("\nBook Details:\n");
    printf("Title: %s\n", B1.title);
    printf("Author: %s\n", B1.author);
    printf("Pages: %d\n", B1.pages);
    return 0;
}
