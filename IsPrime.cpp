//header file that includes input output functions, math functions etc.
#include<bits/stdc++.h>
using namespace std; // Instead of writing std:cout<< we can just use cout<<

 // bool function returns whether the given number is Prime or not.
 // It takes one parameter which is n of data type integer (int)
bool isPrime(int n){  
    if(n<2) return false;      // if the number is <2 then it is a multiple of 1 and 1 is a co-prime.

  //Iterate until sqrt(n) because if n = 28 then sqrt(28) lies between 5 and 6.
  // Since we take floor value i.e 5 we should iterate until 5.
  // We start iteration from 2 because 1 is a multiple of every number.
  // i = 2 and n/i = 14 --> 2 x 14 = 28
  // Since we found one factor other than 1 and itself, it's not a prime number.
    for(int i=2;i<=sqrt(n);i++){   
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter number that you want to check: "<<endl;
    cin>>n;
    if(isPrime(n)){
        cout<<n<<" is a Prime"<<endl;
    }else{
        cout<<n<<" is not Prime"<<endl;
    }
}
