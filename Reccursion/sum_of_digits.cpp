//sum of digits of a number using recursion

#include<iostream>
using namespace std;

int sumofdigits(int n){
    int k;
    if(n==0){
        return n;
    }
    k=n%10;
    n/=10;
    return k+sumofdigits(n);
}

int main(){
    int n;
    cin>>n;
    cout<<sumofdigits(n)<<endl;
    return 0;
}
