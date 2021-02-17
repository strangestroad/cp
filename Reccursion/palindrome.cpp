//To check whether the given number is palindrome or not
#include<iostream>
using namespace std;

int reversen(int n){
    if(n/10==0){
        return n;
    }
    return (n%10)*10+reversen(n/10);
}

int main(){
    int n;
    cin>>n;
    if(n==reversen(n)){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
    return 0;
}
