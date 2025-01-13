#include<iostream>
using namespace std;

//if there are multiple functions and they are calling each other than it is called Indirect function
void funA(int n) {

    if(n>0){
        cout<<n<<endl;
        funB(n-1);
    }
}

void funB(int n) {

    if(n>0){
        cout<<n<<endl;
        funA(n/2);
    }
}


int main(){
    int n=2;
    funA(n);

    return 0;
}