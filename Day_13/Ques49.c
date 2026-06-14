#include<stdio.h>
int main(){
    int arr[50], n;
    printf("No. of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Your array is: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
