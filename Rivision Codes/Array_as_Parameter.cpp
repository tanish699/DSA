#include <iostream>
using namespace std;
  
 //An array is always passed by refrence
 // always use A[] for arrays
void fun(int A[], int n){
     
    for(int i=0;i<=n;i++){
        cout<<A[i]<<endl;
    }
}


int main(){

    int A[]= {1,22,33,44,5,66,77,88,9,69};

    fun(A,10);

    return 0;
}