//To remove spaces from string

#include<stdio.h>
int main(){
    char a[200];
    int k=0;

    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);

    for(int i=0; a[i]!= '\0' && a[i]!= '\n'; i++){
        if(a[i] != ' ' && a[i] !='\t'){
            a[k]=a[i];
            k++;
        }
    }
    a[k] = '\0';
    printf("String after removing space: %s\n", a);

    return 0;
}