//To check string rotation
#include<stdio.h>
int main(){
    char s1[100],s2[100];
    int i,j,len1=0,len2=0,flag=0;

    printf("enter first string ");
    scanf("%s",s1);
    printf("enter second string ");
    scanf("%s",s2);
    
    for(i=0;s1[i]!='\0';i++){
        len1++;
    }
    for(i=0;s2[i]!='\0';i++){
        len2++;
    }
    if(len1!=len2){
        printf("strings are not rotations");
        return 0;
    }
    for(i=0;i<len1;i++){
        flag=1;
        for(j=0;j<len1;j++){
            if(s1[(i+j)%len1]!=s2[j]){
                flag=0;
                break;
            }
        }
        if(flag==1){
            break;
        }
    }
    if(flag==1){
        printf("strings are rotations");
    }
    else{
        printf("strings are not rotations");
    }
    return 0;
}