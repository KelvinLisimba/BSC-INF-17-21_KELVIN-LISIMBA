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

    // Prompt user for length and width
    std::cout << "Enter the length of the rectangle (in meters): ";
    std::cin >> length;

    std::cout << "Enter the width of the rectangle (in meters): ";
    std::cin >> width;

    // Create an instance of Rectangle
    Rectangle rect;

    // Assign values using accessor methods
    rect.setLength(length);
    rect.setWidth(width);

    // To find area
    float area = rect.calculateArea();

    std::cout << "Length of the rectangle: " << rect.getLength() << " meters" << std::endl;
    std::cout << "Width of the rectangle: " << rect.getWidth() << " meters" << std::endl;
    std::cout << "Area of the rectangle: " << area << " square meters" << std::endl;

    return 0;
}