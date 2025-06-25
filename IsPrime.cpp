#include<bits/stdc++.h>
using namespace std;
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