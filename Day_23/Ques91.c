#include<stdio.h>
int main(){
    int lenA=0, lenB=0, flag=1;
    char a[200], b[200];
    
    //input A and find length of a
    printf("Enter the String A: ");
    fgets(a, sizeof(a), stdin);

    while(a[lenA]!= '\0'){
        lenA++;
    }

    //input B and find length of b
    printf("Enter the String B: ");
    fgets(b, sizeof(b), stdin);

    while(b[lenB]!= '\0'){
        lenB++;
    }

    //logic
    if(lenA != lenB){
        flag=0;
    }
    else{
        for(int i=0; i<lenA ;i++){
            int count1=0,count2=0;
            for(int j=0; j<lenA; j++){
                if(a[i]==a[j]){
                    count1++;
                }
            }
            for(int j=0; j<lenB; j++){
                if(a[i]==b[j]){
                    count2++;
                }
            }
            if(count1!=count2){
                flag=0;
                break;
            }
        }
    }
    if(flag==1){
        printf("Strings are ANAGRAMS.\n");
    }
    else{
        printf("Strings are NOT anagrams.\n");
    }
    return 0;

}
