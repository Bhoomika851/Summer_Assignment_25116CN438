#include<stdio.h>
int main(){
    int arr1[20], arr2[20], uni_arr[50], n1, n2 ,k=0;
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
        uni_arr[i] = arr1[i];
        k++;
    }

    for(int i=0; i<n2; i++){
        int isDuplicate = 0;
        for(int j=0; j<k ; j++){
            if(arr2[i]==uni_arr[j]){
                isDuplicate = 1;
                break;
            }
        }
        if(isDuplicate==0){
            uni_arr[k] = arr2[i];
            k++;
        }

    }
    printf("The union array is: ");
    for(int i=0; i<k; i++){
        printf("%d", uni_arr[i]);
    }
    return 0;

}