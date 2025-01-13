#include<iostream>
using namespace std;

void function(int n) {

    if(n>0){
        cout<<n<<endl;
        function(n-1);
    }
}

int main(){
    int n=5;
    function(n);

    return 0;
}