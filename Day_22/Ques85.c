//Check palindrome string
#include<stdio.h>
int main(){
    int len=0, isPalindrome=1;
    char a[20];

    printf("enter the String: ");
    fgets(a, sizeof(a), stdin);

    while(a[len]!= '\0' && a[len]!= '\n'){
        len++;
    }
    int left = 0;
    int right = len-1;
    
    while(left<right){
        if(a[left]!=a[right]){
            isPalindrome=0;
            break;
        }
        left++;
        right--;
        
    }
    if(isPalindrome==1){
        printf("String is palindrome.\n");
    }
    else{
        printf("String is NOT palindrome.\n");
    }
    return 0;
}