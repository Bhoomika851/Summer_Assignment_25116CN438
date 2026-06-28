//Length of String without using strlen
#include<stdio.h>
int main(){
    int len=0;
    char a[20];

    printf("enter the String: ");
    fgets(a, sizeof(a), stdin);

    while(a[len]!= '\0'){
        len++;
    }
    printf("The length of string is: %d ", len);
    return 0;

}