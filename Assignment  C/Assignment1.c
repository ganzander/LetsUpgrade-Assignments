#include<stdio.h>

int main(){
    int M;
    printf("Enter any number:");
    scanf("%d",&M);
    if(M%3==0 && M%5==0){
        printf("Good number");
    }
    else if(M%3==0 && M%5!=0){
        printf("Bad Number");
    }
    else if(M%3!=0 && M%5==0){
        printf("Poor Number");
    }
    else{
        printf("-1");
    }
    return 0;
}