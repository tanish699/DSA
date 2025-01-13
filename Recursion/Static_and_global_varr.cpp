#include<iostream>
using namespace std;

/* By Using Static Variable
int fun(int n){
    int x=0;
    if(n>0){
        x++;
        return fun(n-1) + x;
    }
    
    return 0;

}
*/
 int x =0;  //Now x is global variable
int fun(int n){
    
    if(n>0){
        x++;
        return fun(n-1) + x;
    }
    
    return 0;
}

int main(){
    int n=5;
    int r =fun(n);
    cout<<r;
    

    return 0;
}