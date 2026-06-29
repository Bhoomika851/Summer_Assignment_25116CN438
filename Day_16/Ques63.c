#include <stdio.h>
int main(){
    int n,i,j;
    printf ("enter the number of array elements");
    scanf ("%d", &n);
    int a[n];
    for (i=0;i<n;i++){
    printf("enter a[%d]", i);
    scanf("%d",&a[i]);
    }
    int sum;
    printf ("enter required sum");
    scanf("%d",&sum);
    printf ("required pairs are = ");
    for (i=0;i<n-1;i++){
      for (j=i+1;j<n;j++){ //each pair is only checked once
        if (a[i]+a[j]==sum) {
            printf("%d\t%d",a[i],a[j]);
            printf ("\n");
        }
      }
    }
    return 0;
}