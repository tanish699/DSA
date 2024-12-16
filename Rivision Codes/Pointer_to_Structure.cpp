#include<iostream>
using namespace std;

struct Rectangle{  //Making a Structure
    int length;
    int breadth;

};

int main() {

    struct Rectangle r={10,20};
    cout<<r.length<<endl;   //For normal variable we use ' . '
    cout<<r.breadth<<endl;

    Rectangle *p = &r;
    cout<<p->length<<endl; //For Pointer we use ' -> '
    cout<<p->breadth;

   return 0;
}