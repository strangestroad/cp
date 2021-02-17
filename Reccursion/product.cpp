//find product of two number using recursion
#include<iostream>
using namespace std;

int product(int x,int y){
    if(x==1){
        return y;
    }
    return y+product(x-1,y);
}

int main(){
    int x,y;
    cin>>x>>y;
    if(x>y){
        swap(x,y);
    }
    cout<<product(x,y)<<'\n';
    return 0;
}
