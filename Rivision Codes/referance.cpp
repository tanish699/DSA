#include<iostream>
using namespace std;

int main() {

    int a =10;
    int &r=a;    //& means refrance
    // now r will store value of a
    cout<<a<<" "<<r<<endl;
    int b =30;
    r = b; //now r will not ponit to b therefore it will store b value(30) to a 

    cout<<a<<" "<<r<<endl;
}