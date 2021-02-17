//prime number using recursion
#include<iostream>
#include<cmath>
using namespace std;

bool prime(int n,int i=2){
     if(n<2){
        return false;
     }
     if(n==2){
        return true;
     }
     if(n%i==0){
        return false;
     }
     if(i*i>=n){
        return true;
     }
     return prime(n,i+1);
}

int main(){
    int n;
    cin>>n;
    if(prime(n)){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
}
