#include<iostream>
using namespace std;

//if the function is calling itself more than one time then it is called tree recurssion
void function(int n) {

    if(n>0){
        cout<<n<<endl;
        function(n-1);
        function(n-1);  /* <-- Like this*/
    }
}



int main(){
    int n=2;
    function(n);

    return 0;
}