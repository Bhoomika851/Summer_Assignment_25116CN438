#include<stdio.h>
int main(){
    int n, arr[20], count=0;
    printf("Ente no. of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i =0; i<n; i++){
        if(arr[i]!=0){
            arr[count]=arr[i];
            count++;
        }
    }
    while(count<n)
    {
        arr[count] = 0;
        count++;
    }
    printf("Array after moving zeroes to end: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;

}    