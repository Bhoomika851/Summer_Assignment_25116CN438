//Selection sort
#include<stdio.h>
int main(){
    int n, temp, arr[20];
    printf("Enter no. of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n-1; i++){
        int min_idx=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
    printf("The sorted array is ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);

    }
    return 0;
}