//header file that includes input output functions, math functions etc.
#include<bits/stdc++.h>
using namespace std; // Instead of writing std:cout<< we can just use cout<<

 // bool function returns whether it is prime or not
bool isPrime(int n){  
    if(n<2) return false;
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
