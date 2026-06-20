//Intersection of arrays
#include<stdio.h>
int main(){
    int arr1[20], arr2[20], int_arr[50], n1, n2 ,k=0;
    printf("Enter no. of elements: ");
    scanf("%d %d", &n1, &n2);

    printf("Enter element in 1st array: ");
    for(int i=0; i<n1; i++){
        scanf("%d", &arr1[i]);
    }
    printf("Enter element in 2st array: ");
    for(int i=0; i<n2; i++){
        scanf("%d", &arr2[i]);
    }

    for(int i=0; i<n1; i++){
        int FoundinBoth=0;
        for(int j=0; j<n2; j++){
            if(arr1[i]== arr2[j]){
                FoundinBoth=1;
                break;
            }
        }
        if(FoundinBoth==1){
            int alreadySaved =0;
            for(int j=0; j<k; j++){
                if(arr1[i] == int_arr[j]){
                    alreadySaved = 1;
                    break;
                }
            }
            
            // If it is completely new to our results, save it!
            if(alreadySaved == 0){
                int_arr[k] = arr1[i];
                k++;
            
            }
        }
    }
    if(k == 0) {
        printf("No common elements found (Intersection is empty).\n");
    } else {
        printf("The intersection array is: ");
        for(int i = 0; i < k; i++){
            printf("%d ", int_arr[i]);
        }
        printf("\n");
    }

    return 0;

}