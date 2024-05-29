#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;
    
public:
    // Default constructor
    Rectangle() {
        length = 0.0;
        width = 0.0;
    }
    
    // Overloaded constructor
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }
    
    // Destructor
    ~Rectangle() {
        // No dynamic memory to deallocate
    }
    
    // Accessor methods
    void setLength(float l) {
        length = l;
    }
    
    void setWidth(float w) {
        width = w;
    }
    
    float getLength() const {
        return length;
    }
    
    float getWidth() const {
        return width;
    }
    
    // Member function to calculate area
    float calculateArea() const {
        return length * width;
    }
};

int main() {
    float length, width;

    // more comment from first program
    std::cout << "Enter the length of the first rectangle (in meters): ";
    std::cin >> length;

    std::cout << "Enter the width of the first rectangle (in meters): ";
    std::cin >> width;

    Rectangle rect1;

    rect1.setLength(length);
    rect1.setWidth(width);

    std::cout << "Area of the first rectangle: " << rect1.calculateArea() << " square meters" << std::endl;
    std::cout << "Enter the length of the second rectangle (in meters): ";
    std::cin >> length;

    std::cout << "Enter the width of the second rectangle (in meters): ";
    std::cin >> width;

    Rectangle rect2(length, width);

    // Calculate and output area for the second rectangle
    std::cout << "Area of the second rectangle: " << rect2.calculateArea() << " square meters" << std::endl;

    return 0;
}