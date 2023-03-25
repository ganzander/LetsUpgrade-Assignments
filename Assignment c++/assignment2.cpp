// Wap to check whether a number is prime or not
#include<iostream>
using namespace std;

bool checkPrime(int num){
    bool prime=true;
    for(int i=2;i<=((num)/2);i++){
        if(num%i == 0){
            prime=false;
            break;
        }
    }
    return prime;
}

int main(){
    int n;
    cout<<"Enter the number you want it to check whether it is prime or not"<<endl;
    cin>>n;
    if(checkPrime(n)==true){
        cout<<n<<" is a Prime Number"<<endl;
    }
    else{
        cout<<n<<" is not a Prime Number"<<endl;
    }
    return 0;
}