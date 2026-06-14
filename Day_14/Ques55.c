#include<stdio.h>
#include<limits.h>
int main(){
    int arr[50], n;
    printf("No. of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int max = INT_MIN;
    int max2 = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] > max2 && arr[i] != max) {
            max2 = arr[i];
        }
    }
    printf("second largest is %d", max2);
    return 0;
}