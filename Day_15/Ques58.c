#include<stdio.h>
int main(){
    int temp, d, n, arr[20];
    printf("Ente no. of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter no. of positions to rotate left:");
    scanf("%d", &d);

    d=d%n;
    for(int rotate=0; rotate<d; rotate++){
        temp = arr[0];
        for(int i=0; i<n-1; i++){
            arr[i]=arr[i+1];
        }
        arr[n-1]=temp;

    }
    
    printf("The array rotated by %d is ", d);
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}