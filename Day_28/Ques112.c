#include <stdio.h>
struct contact{
    char name[20];
    long long phone;
};
int main(){
    int n;
    printf("enter number of contacts "); 
    scanf("%d",&n);
    struct contact c[n];
    int i,f=0;
    long long search;
    printf("enter details of contacts\n");
    for(i=0;i<n;i++){
        printf("enter name ");
        scanf("%s",c[i].name);
        printf("enter phone number ");
        scanf("%lld",&c[i].phone);
    }
    printf("contact list\n");
    for(i=0;i<n;i++){
        printf("%s\t%lld\n",c[i].name,c[i].phone);
    }
    printf("enter phone number to search ");
    scanf("%lld",&search);
    for(i=0;i<n;i++){
        if(c[i].phone==search){
            printf("contact found\n");
            printf("name = %s\n",c[i].name);
            printf("phone = %lld\n",c[i].phone);
            f=1;
            break;
        }
    }
    if(f==0)
        printf("contact not found");
    return 0;
}