#include "Triangle.h"

int Triangle::Area(){
    return mWidth * mHeight / 2;
}
Triangle::Triangle(int a, int b){
    mWidth = a;
    mHeight = b;
}