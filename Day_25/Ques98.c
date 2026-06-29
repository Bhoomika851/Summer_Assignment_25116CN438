#include<stdio.h>
int main(){
    char s1[100],s2[100];
    int i,j;
    printf("enter first string ");
    scanf("%s",s1);
    printf("enter second string ");
    scanf("%s",s2);
    printf("common characters=");
    for(i=0;s1[i]!='\0';i++){
        for(j=0;s2[j]!='\0';j++){
            if(s1[i]==s2[j]){
                printf("%c ",s1[i]);
                break;
            }
        }
    }
return 0;
}