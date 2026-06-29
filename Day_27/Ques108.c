#include <stdio.h>
int main(){
    char name[30];
    float m1,m2,m3,m4,m5,total,per;
    printf("enter student name ");
    scanf("%s",name);
    printf("enter marks of 5 subjects out of 100 ");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
    total=m1+m2+m3+m4+m5;
    per=total/5;
    printf("student name= %s\n",name);
    printf("total = %.2f\n",total);
    printf("percentage = %.2f\n",per);
    if(per>=90)
        printf("grade = a\n");
    else if(per>=75)
        printf("grade = b\n");
    else if(per>=60)
        printf("grade = c\n");
    else if(per>=40)
        printf("grade = d\n");
    else
        printf("grade = fail\n");

    return 0;
}