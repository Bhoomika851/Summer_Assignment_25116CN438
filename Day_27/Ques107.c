#include <stdio.h>
struct employee{
    int id;
    char name[20];
    float salary;
};
int main(){
    struct employee e;
    printf("enter employee id ");
    scanf("%d",&e.id);
    printf("enter employee name ");
    scanf("%s",e.name);
    printf("enter salary ");
    scanf("%f",&e.salary);
    printf("employee details\n");
    printf("id = %d\n",e.id);
    printf("name = %s\n",e.name);
    printf("salary = %.2f\n",e.salary);
return 0;
}
