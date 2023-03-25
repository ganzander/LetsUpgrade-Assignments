#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseNum(int num){
    int n=num, rev=0;
    while (num > 0) {
      int digit = num % 10;
      rev = (rev * 10) + digit;
      num = num/10;
   }
    cout<<"The reverse of "<<n<<" is "<<rev<<endl;
}

void performConditions(int num){
    if(num%3==0 && num%5==0){
        cout<<"Good Number"<<endl;
    }
    else if (num%3==0 && num%5!=0){
        cout<<"Bad Number"<<endl;
    }
    else if (num%3!=0 && num%5==0){
        cout<<"Poor Number"<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
}

int main(){
    // Given an integer M perform the following conditional actions:
    // - If M is multiple of 3 and 5 then print "Good Number" (without quotes).
    // - If M is only multiple of 3 and not of 5 then print "Bad Number" (without quotes).
    // - If M is only multiple of 5 and not of 3 then print "Poor Number" (without quotes).
    // - If M doesn't satisfy any of the above conditions then print "-1" (without quotes).
    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    performConditions(n);

    // Wap to. Reverse digit of a number 
    // Ex 12345
    // Ans. 54321
    int num;
    cout<<"Enter another number"<<endl;
    cin>>num;
    reverseNum(num);

    return 0;
}
