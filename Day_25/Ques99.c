#include<stdio.h>
#include<string.h>
int main(){
    char name[100][20],temp[20];
    int i,j,n;
    printf("enter the number of names ");
    scanf("%d",&n);
    printf("enter the names ");
    for(i=0;i<n;i++){
        scanf("%s",name[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(name[i],name[j])>0){
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }

    printf("names in alphabetical order= \n");
    for(i=0;i<n;i++){
        printf("%s\n",name[i]);
    }
return 0;
}