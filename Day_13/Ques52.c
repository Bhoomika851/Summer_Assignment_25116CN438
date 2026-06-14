#include<stdio.h>
int main(){
    int arr[50], n, odd=0, even=0;
    printf("No. of Elements:");
    scanf("%d", &n);

    printf("Enter %d elements: \n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i]%2 ==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("The no. of even elements: %d\n", even);
    printf("The no. of odd elements: %d\n", odd);

    return 0;
}