#include<stdio.h>
int main(){
    int arr[50], n;
    printf("No. of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("The duplicate no. are:");
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]== arr[j]){
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    printf("\n");
    return 0;
}