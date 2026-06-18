#include<stdio.h>
int main(){
    int n, temp, arr[50];
    printf("Ente no. of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int start = 0;
    int end = n-1;
    while(start<end){
        temp= arr[start];
        arr[start] =arr [end];
        arr[end]= temp;
        start++;
        end--;

    }
    printf("The reversed array is: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}