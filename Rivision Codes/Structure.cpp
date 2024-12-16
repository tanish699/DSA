#include<iostream>
using namespace std;

struct Rectangle{  //Making a Structure
    int length;
    int breadth;

};

int main() {

    struct Rectangle r; //Declaration

    struct Rectangle g={10,20}; //Declaration + Initialisation
    cout<<g.length<<"  "<<g.breadth<<endl;


    r.length = 15; // . Is is used to access a member
    r.breadth = 10;

    cout<<"Area of Rectangle  "<<r.length*r.breadth;
    return 0;

    
}