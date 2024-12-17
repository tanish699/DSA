#include<iostream>
using namespace std;


struct Rectangle{
    int length;
    int bredth;
};


// call by value
int area(struct Rectangle r1){

    return r1.length*r1.bredth;
}

// call by refrence
int areaa(struct Rectangle &r1){
    r1.length++;
    return r1.length*r1.bredth;
}

int main(){

    struct Rectangle r = {10,20};
    cout<<area(r)<<endl;
    cout<<areaa(r)<<endl;
    return 0;
    
}