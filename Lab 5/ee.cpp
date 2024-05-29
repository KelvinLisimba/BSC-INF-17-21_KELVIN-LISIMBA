#include <iostream>
#include <limits>
using namespace std;
// following are function to calculate the area of the shapes
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

double calculateRectangleArea(double length, double width) {
    return length * width;
}

double calculateSquareArea(double sides) {
    return sides * sides;
}

int main() {
    char choice;

    while (true)
    {
       std:: cout << "please select the area of the shape to calculate: \n";
       std:: cout << "1. Triangle\n";
       std:: cout << "2. Rectangle\n";
       std::cout << "3. Square\n";
       std::cout << "4. Quit\n";
       std:: cout << "Enter selection(1, 2, 3, 4):";

       std:: cin >> choice;

        switch (choice) {
            case '1': {
            double base, height;
           std:: cout << "Enter the base of the triangle:";
           std:: cin >> base;
           std::cout <<"Enter the height of the triangle:";
           std:: cin >> height;
           std:: cout << "The area of the triangle is: " << calculateTriangleArea(base, height) << std:: endl;
            break;
            }
            case '2': {
                double length, width;
               std:: cout <<"Enter the length of the rectangle:";
                std::cin >> length;
                std::cout <<"Enter the width of the rectangle:";
                std::cin >> width;
                std::cout << "The area of the rectangle is:" << calculateRectangleArea(length, width) << std::endl;
                 break;
            }

            case '3': {
                double side;
                std::cout << "Enter the side length of the square: ";
               std:: cin >> side;
               std:: cout <<"The area of the square is: " << calculateSquareArea(side) << std::endl;
                break;
            }

            case '4': 
               std::cout << "Exiting the program.\n";
               return 0; 

            default:
              std::cout << "your input choice was:" << choice  <<"which is an invalid input.please enter valid input!!! (1, 2, 3, or 4 ). \n";
              std::cin.clear();
              std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
              break;

        }
    }
 return 0;

}
