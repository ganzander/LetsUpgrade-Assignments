#include<iostream>
using namespace std;

void evenOdd(int num){
    if(num%2==0){
        cout<<"The number "<< num <<" is EVEN."<<endl;
    }
    else{
        cout<<"The number "<< num <<" is ODD."<<endl;
    }
}

void swapTwoNumbers(int a, int b){
    cout<<"Before swapping, The numbers are: a="<<a<<" and b="<<b<<"."<<endl;
    b=a+b;
    a=b-a;
    b=b-a;
    cout<<"After swapping, The numbers are: a="<<a<<" and b="<<b<<"."<<endl;
}

int main(){
    // To check whether a number is even or odd
    evenOdd(85);

    // To swap two numbers (100 and 80) with only two variables NOT THREE
    swapTwoNumbers(100,80);
    return 0;
}