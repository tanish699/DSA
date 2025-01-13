#include<iostream>
using namespace std;

//if the function is calling it self and that call is at the starting of the function then it is called head recurssion
void function(int n) {

    if(n>0){
        function(n-1);  /* <-- Like this*/
        cout<<n<<endl;
        
    }
}



int main(){
    int n=5;
    function(n);

    return 0;
}