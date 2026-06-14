#include<stdio.h>
int main(){
    int arr[50], n, max, min;
    printf("No. of elements:");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min= arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("The max no. is:%d\n", max);
    printf("The min no. is:%d\n", min);
    return 0;
}