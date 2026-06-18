#include<stdio.h>
int main(){
    int n, size, arr[20];
    printf("Ente no. of elements: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", n);
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    n = size+1;
    int exp_sum = (n*(n+1))/2;
    int act_sum = 0;

    for(int i=0; i<size; i++){
        act_sum += arr[i];
    
    }
    int missing_element = exp_sum - act_sum;

    printf("The missing element is %d", missing_element);

    return 0;
}