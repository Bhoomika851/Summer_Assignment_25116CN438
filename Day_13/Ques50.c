#include<stdio.h>
int main(){
    int arr[50], n, sum=0;
    printf("No. of Element: ");
    scanf("%d", &n);

    printf("Enter %d elements: ",n);
    for (int i = 0; i < n; i++){
        scanf("%d ", &arr[i]);
    }
    for(int i=0; i<n; i++){
        sum+= arr[i];
    }
    printf("The sum of elements is: %d", sum);
    return 0;
    
}