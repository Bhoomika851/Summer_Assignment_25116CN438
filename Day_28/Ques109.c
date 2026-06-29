#include <stdio.h>
struct book{
    int id;
    char name[30];
    char author[30];
};
int main(){
    struct book b;
    printf("enter book id ");
    scanf("%d",&b.id);
    printf("enter book name ");
    scanf("%s",b.name);
    printf("enter author name ");
    scanf("%s",b.author);
    printf("book details\n");
    printf("book id = %d\n",b.id);
    printf("book name = %s\n",b.name);
    printf("author = %s\n",b.author);
    return 0;
}