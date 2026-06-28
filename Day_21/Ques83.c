//Count no. of string
#include<stdio.h>
int main(){
    char str[100];
    int vowel=0, consonants=0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i=0; str[i]!= '\0'; i++){
        char ch = str[i];
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            vowel++;
        }
        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
            consonants++;
        }
    }
    printf("Total vowels: %d\n", vowel);
    printf("Total consonants: %d", consonants);

    return 0;
}