#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main(){
    int n;
    bool checkPrime=true;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            checkPrime=false;
            break;
        }
    }
    if(checkPrime==true){
        printf("The number %d is prime number",n);
    }
    else{
        printf("The number %d is not prime",n);
    }
    return 0;
}