#include<iostream>
using namespace std;

void fun(int x){
    if(x>0){
        fun(x-1);  //firstly the function will be called until x = 0 then the x will be printed
        cout<<x<<endl;
    }
}


int main() {
    int x=5;
    fun(x);

    return 0;

}