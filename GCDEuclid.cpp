#include<bits/stdc++.h>
using namespace std;
void get_GCD(int a, int b){
    while(true){
        if(a > b){
            a -= b;
        }else if(b > a){
            b -= a;
        }
        else{
            break;
        }
    }
    cout<<"GCD :"<<a<<endl;
}
int main(){
    int a, b;
    cin>>a>>b;
    get_GCD(a, b);
}