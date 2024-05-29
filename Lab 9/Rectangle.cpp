#include "Rectangle.h"
int Rectangle::Area(){
    return mWidth * mHeight;
}
Rectangle::Rectangle(int a, int b){
    mWidth = a;
    mHeight = b;
}