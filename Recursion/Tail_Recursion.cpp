#include<iostream>
using namespace std;

//if the function is calling it self and that call is the last statement of the function then it is called tail recurssion
void function(int n) {

    if(n>0){
        cout<<n<<endl;
        function(n-1);  /* <-- Like this*/
    }
}

//Tail Recursion can easily be converted into loop

int main(){
    int n=5;
    function(n);

    return 0;
}