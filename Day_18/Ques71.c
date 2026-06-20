//Binary search
#include<stdio.h>
int main(){
    int n, arr[20], key;
    printf("Enter no. of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to find: ");
    scanf("%d", &key);
    int start = 0;
    int end = n-1;
    int found=0;
    
    while(start<=end){
        int mid = (start + end)/2;

        if(arr[mid]==key){
            printf("The key %d is found at index %d", key, mid);
            found=1;
            break;
        }
        else if (arr[mid]<key){

            start = mid+1;
        }
        else{
            end = mid-1;
        }
        if(found ==0){
            printf("%d is not found. ");

        }
    
    }
    return 0;
}

