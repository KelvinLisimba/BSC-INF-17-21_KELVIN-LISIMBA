#include "Box.h"
#include <iostream>
using namespace std;

int main(){
    Box Box1;   //Declare box1 of type Box
    Box Box2;   //Declare Box2 of type Box
    Box Box3;   //Declare Box3 of type Box
    double volume = 0.0;

    //box 1 specification
    Box1.SetLength(6.0);
    Box1.SetLength(7.0);
    Box1.SetLength(5.0);
    
    //box 12 specification
    Box2.SetLength(12.0);
    Box2.SetLength(13.0);
    Box2.SetLength(10.0);

    //volume of box 1
    volume = Box1.GetVolume();
    cout<<"Volume of Box1 : "<< volume <<endl;

    //volume of box 2
    volume = Box2.GetVolume();
    cout<<"Volume of Box2 : "<< volume <<endl;

    //add two objects as follows:
    Box3 = Box1 + Box2;

    //volume of box 3
    volume = Box3.GetVolume();
    cout<<"Volume of Box3:  "<< volume <<endl;

    return 0;
}