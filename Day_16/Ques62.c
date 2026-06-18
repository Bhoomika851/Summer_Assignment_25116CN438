#include<stdio.h>
int main(){
    int n, arr[20], key;
    printf("Ente no. of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int max_elmt = arr[0];
    int max_count = 0;

    for(int i=0; i<n; i++){
        int count =0;
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
    
        if(count > max_count) {
            max_count = count;
            max_elmt = arr[i];
        }
    }

    printf("Element with max frequency is: %d (Appears %d times)\n", max_elmt, max_count);
    return 0;
}






