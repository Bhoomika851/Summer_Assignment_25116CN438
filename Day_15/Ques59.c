#include<stdio.h>
int main(){
    int temp, d, n, arr[20];
    printf("Ente no. of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter no. of positions to rotate right:");
    scanf("%d", &d);

    d=d%n;
    for(int rotate=0; rotate<d; rotate++){
        temp = arr[n-1];
        for(int i=n-1; i>0; i--){
            arr[i]=arr[i-1];
        }
        arr[0]=temp;

    }
    
    printf("The array rotated by %d is ", d);
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}