#include<stdio.h>
int main(){
    int a[20], b[20], merge[20], n1, n2;
    printf("Enter no. of elements: ");
    scanf("%d %d", &n1, &n2);

    printf("Enter elements in a: ");
    for(int i=0; i<n1; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter elements in b: ");
    for(int i=0; i<n2; i++){
        scanf("%d", &b[i]);
    }

    for(int i=0; i<n1; i++){
        merge[i]=a[i];
    }
    for(int i=0; i<n2; i++){
        merge[n1+i] = b[i];
    }

    printf("The merged array is: ");
    for(int i=0; i<n1+n2; i++){
        printf("%d ", merge[i]);
    }
    printf("\n");
    return 0;
}