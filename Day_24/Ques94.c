//To compress string
#include<stdio.h>
int main(){
    char s[100];
    int i,count;

    printf("enter a string ");
    scanf("%s",s);

    for(i=0;s[i]!='\0';i=i+count){
        count=1;
        while(s[i+count] != '\0' && s[i]==s[i+count]){
            count++;
        }
        printf("%c%d",s[i],count);
    }
    printf("\n");
    return 0;
}