//Find Power Using Recursion
#include<iostream>
using namespace std;

int pow(int m, int n){

    if(n==0){
       return 1;
    }
    else{
        return pow(m,n-1) *m;
    }
}


int main(){
    int m = 5;
    int n = 3;
    cout<<pow(m, n);
    return 0;

}