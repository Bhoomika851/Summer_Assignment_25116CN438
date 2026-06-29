#include<stdio.h>
int main(){
    char s[100];
    int i,j,flag;
    printf("enter a string ");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
        flag=0;
        for(j=0;j<i;j++){
            if(s[i]==s[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%c",s[i]);
        }
    }
    return 0;
}