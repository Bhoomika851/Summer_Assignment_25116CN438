#include<stdio.h>
int addmynum(int digit1, int digit2){
    int result = digit1 + digit2;
    return result;
}
int main(){
    int x, y, output;
    printf("Enter x & y : ");
    scanf("%d %d", &x, &y);

    output = addmynum(x,y);
    printf("The sum is: %d", output);
    
    return 0;
}