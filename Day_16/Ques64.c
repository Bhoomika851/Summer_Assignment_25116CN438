#include <stdio.h>
int main() {
  int n,i,j;
  printf ("enter the number of array elements");
  scanf ("%d", &n);
  int a[n];
  for (i=0;i<n;i++){
  printf("enter a[%d]", i);
  scanf("%d",&a[i]);
  }
  int freq[100] = {0};
  for(int i = 0; i < n; i++) {
      freq[a[i]]++; //counting frequencies for each element
    }
  printf("without duplicates= ");
  for(int i = 0; i < n; i++) {
        if(freq[a[i]] > 0) {
            printf("%d ", a[i]);
            freq[a[i]] = 0;
        }
    }
  return 0;
}
