//Sum of n natural numbers

#include<iostream>
using namespace std;

int SUM(int n){
  
    if(n==0){
        return 0;
    }
    else{
       return SUM(n-1)+n;
    }
    
}

int main(){
    int n=5;
    cout<<SUM(n)<<endl;
    return 0;
}