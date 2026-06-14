#include<stdio.h>
int main(){
    int arr[50], n, key, found;
    printf("No. of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Find: ");
    scanf("%d", &key); 

    for(int i=0; i<n; i++){
        if(key==arr[i]){
            printf("Key element %d is found at index %d", key, i);
            found =1;
            break;
        }
    }
    if(found==0){
        printf("Key element %d is not Found", key);
    }
    return 0;
}