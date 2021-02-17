//factorial of a number using recursion

#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0 or n==1){
        return n;
    }
    return n*factorial(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}
