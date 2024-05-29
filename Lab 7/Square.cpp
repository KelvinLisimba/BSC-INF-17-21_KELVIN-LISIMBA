#include <iostream>
#include <cmath>
using namespace std;

namespace shapes {
    class Square {
    private:
        float sideLength;
        
    public:
        // Default constructor
        Square() {
            sideLength = 0.0;
        }
        
        // Overloaded constructor
        Square(float side) {
            sideLength = side;
        }
        
        // Destructor
        ~Square() {
            // No dynamic memory to deallocate
        }
        
        // Accessor methods
        void setSideLength(float side) {
            sideLength = side;
        }
        
        float getSideLength() const {
            return sideLength;
        }
    };
    
    class Triangle {
    private:
        float base;
        float height;
        
    public:
        // Default constructor
        Triangle() {
            base = 0.0;
            height = 0.0;
        }
        
        // Overloaded constructor
        Triangle(float b, float h) {
            base = b;
            height = h;
        }
        
        // Destructor
        ~Triangle() {
            // No dynamic memory to deallocate
        }
        
        // Accessor methods
        void setBase(float b) {
            base = b;
        }
        
        void setHeight(float h) {
            height = h;
        }
        
        float getBase() const {
            return base;
        }
        
        float getHeight() const {
            return height;
        }
    };
    
    class Circle {
    private:
        float radius;
        
    public:
        // Default constructor
        Circle() {
            radius = 0.0;
        }
        
        // Overloaded constructor
        Circle(float r) {
            radius = r;
        }
        
        // Destructor
        ~Circle() {
            // No dynamic memory to deallocate
        }
        
        // Accessor methods
        void setRadius(float r) {
            radius = r;
        }
        
        float getRadius() const {
            return radius;
        }
    };
    
    class Area {
    public:
        // Static member function to calculate area of a square
        static float calculateArea(const Square& sq) {
            float side = sq.getSideLength();
            return side * side;
        }
        
        // Static member function to calculate area of a triangle
        static float calculateArea(const Triangle& tri) {
            float base = tri.getBase();
            float height = tri.getHeight();
            return 0.5 * base * height;
        }
        
        // Static member function to calculate area of a circle
        static float calculateArea(const Circle& cir) {
            float radius = cir.getRadius();
            return M_PI * radius * radius;
        }
    };
}

int main() {
    using namespace shapes;
    
    char choice;
    
    do {
        std::cout << "\nOptions:\n";
        std::cout << "1. Calculate the area of a square\n";
        std::cout << "2. Calculate the area of a triangle\n";
        std::cout << "3. Calculate the area of a circle\n";
        std::cout << "4. Quit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        
        switch (choice) {
            case '1': {
                float side;
                std::cout << "Enter the side length of the square: ";
                std::cin >> side;
                Square sq(side);
                std::cout << "Area of the square: " << Area::calculateArea(sq) << std::endl;
                break;
            }
            case '2': {
                float base, height;
                std::cout << "Enter the base length of the triangle: ";
                std::cin >> base;
                std::cout << "Enter the height of the triangle: ";
                std::cin >> height;
                Triangle tri(base, height);
                std::cout << "Area of the triangle: " << Area::calculateArea(tri) << std::endl;
                break;
            }
            case '3': {
                float radius;
                std::cout << "Enter the radius of the circle: ";
                std::cin >> radius;
                Circle cir(radius);
                std::cout << "Area of the circle: " << Area::calculateArea(cir) << std::endl;
                break;
            }
            case '4':
                std::cout << "Exiting the program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
        
    } while (choice != '4');
    
    return 0;
}