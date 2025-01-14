#include<iostream>
using namespace std;

//if there are multiple functions and they are calling each other than it is called Indirect function

int funA(int n);

int funB(int n) {

    if(n>0){
        cout<<n<<"b"<<endl;
        funA(n-1);
    }
}

int funA(int n) {

    if(n>0){
        cout<<n<<"a"<<endl;
        funB(n/2);
    }
}


int main(){
    int n=20;
    funA(n);

    return 0;
}