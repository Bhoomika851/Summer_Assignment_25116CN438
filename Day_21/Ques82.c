//Reverse the string
#include<stdio.h>
int main(){
    char a[30];
    int len=0;

    printf("enter the String: ");
    fgets(a, sizeof(a), stdin);

    while(a[len]!= '\0'){
        len++;
    }

    int left=0;
    int right = len - 1;
    while(left<right){
        char temp = a[left];
        a[left] = a[right];
        a[right] = temp;
        
        left++;
        right--;
    
    }
    printf("Reverse String: %s", a);
    return 0;

}