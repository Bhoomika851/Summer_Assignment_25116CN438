#include <stdio.h>
int main(){
    int score=0,a;
    printf("question 1\n");
    printf("1.correct\n2.wrong\n3.wrong\n4.wrong\n");
    scanf("%d",&a);
    switch(a){
        case 1:
            score++;
            break;
        default:
            break;
    }
    printf("question 2\n");
    printf("1.wrong\n2.correct\n3.wrong\n4.wrong\n");
    scanf("%d",&a);
    switch(a){
        case 2:
            score++;
            break;
        default:
            break;
    }
    printf("score=%d",score);
return 0;
}