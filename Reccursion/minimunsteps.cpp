// minimum steps to reach a destination
#include<iostream>
#include<cmath>
using namespace std;

int minSteps(int source,int laststep,int D){
    if(D==source){
        return laststep;
    }
    if(abs(source)>D){
        return 100000;
    }
    return min(minSteps(source+laststep+1,laststep+1,D),minSteps(source-laststep-1,laststep+1,D));
}

int main(){
    int D;
    cin>>D;
    cout<<minSteps(0,0,D)<<endl;
    return 0;
}
