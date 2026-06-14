#include<stdio.h>
int main(){
    int arr[50], n, sum=0;
    float avg;
    printf("No. of Element: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n",n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    avg = sum/n;
    printf("The sum of elements is: %d\n", sum);
    printf("The average is %.2f\n", avg);
    return 0;
    
}