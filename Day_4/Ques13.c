#include<stdio.h>
int main(){
    int n, t1, t2, temp;
    printf("Enter the number:");
    scanf("%d", &n);
    t1 = 0;
    t2 = 1;
    printf("The fibonacci series is:");
    for(int i=1; i<=n; i++){
        printf("%d ", t1);
        temp = t1 + t2;
        t1 = t2;
        t2 = temp;
        
    }
    printf("\n"); 
    return 0;

} 