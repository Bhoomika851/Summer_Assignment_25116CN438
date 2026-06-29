#include <stdio.h>
struct student{
    int roll;
    char name[20];
    float marks;
};

int main(){
    struct student s;
    printf("enter roll number ");
    scanf("%d",&s.roll);
    printf("enter name ");
    scanf("%s",s.name);
    printf("enter marks ");
    scanf("%f",&s.marks);
    printf("student details\n");
    printf("roll number = %d\n",s.roll);
    printf("name = %s\n",s.name);
    printf("marks = %.2f\n",s.marks);
    return 0;
}