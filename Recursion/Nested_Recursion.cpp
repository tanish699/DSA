#include<iostream>
using namespace std;

//Recursion inide the recursion
int function(int n) {

    if(n>100){
        return n-10; 
        
    }
    else{return  function(function(n+11)); /* <-- Like this*/}
    
}



int main(){
    int n=30;
    cout<<function(n)<<endl;

    return 0;
}