// Convert lowercase into uppercase

#include<stdio.h>
int main(){
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i=0; str[i]!='\0' && str[i] !='\n'; i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i] -= 32;
        }
    }
    printf("string in UPPERCASE: %s\n", str);
    return 0;
}