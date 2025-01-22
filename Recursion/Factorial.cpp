#include<iostream>
using namespace std;

int Fact(int n){
    if(n>0){
        return Fact(n-1)*n;
    }
    else{
        return 1;
    }
}

int main(){
    int x =10;
    cout<<Fact(x)<<endl;
    return 0;
}