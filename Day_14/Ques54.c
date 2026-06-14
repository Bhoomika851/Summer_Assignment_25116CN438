#include<stdio.h>
int main(){
    int arr[50], n, key, count=0;
    printf("No. of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Frequency of: ");
    scanf("%d", &key);

    for(int i=0; i<n; i++){
        if(key==arr[i]){
            count++;
        }
    }
    printf("The frequency of %d is %d", key, count);
    if(count==0){
        printf("Key %d, Not Found!!", key);
    }
    return 0;
}