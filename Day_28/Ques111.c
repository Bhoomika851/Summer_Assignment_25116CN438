#include <stdio.h>
struct ticket{
    char name[20];
    int age;
    int seat;
};
int main(){
    struct ticket t[5];
    int i,n;
    printf("enter number of passengers ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nenter details of passenger %d\n",i+1);
        printf("enter name ");
        scanf("%s",t[i].name);
        printf("enter age ");
        scanf("%d",&t[i].age);
        printf("enter seat number ");
        scanf("%d",&t[i].seat);
    }
    printf("booked tickets\n");
    printf("name\tage\tseat\n");
    for(i=0;i<n;i++){
        printf("%s\t%d\t%d\n",t[i].name,t[i].age,t[i].seat);
    }
    return 0;
}