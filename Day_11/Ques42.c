#include<stdio.h>
int max(int n1, int n2){
    int result;
    if(n1>n2){
        result = n1;
    }
    else{
        result = n2;
    }
    return result;
}
int main(){
    int x, y, output;
    printf("Enter x & y: ");
    scanf("%d %d", &x, &y);

    output = max(x,y);
    printf("The maximum no. is: %d", output);
    return 0;
}