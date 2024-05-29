
#include <iostream>
#include <string>
using namespace std;

int main() {
    // This is about dynamically an integer
    int* dynamicInteger = new int;

    // This is about dynamically allocate a string
    std::string* dynamicString = new std::string;

    //assign a value to the dynamically allocated integer
    std::cout <<"Enter a value for the dynamically allocated integer: ";
    std::cin >> *dynamicInteger;
    
    //assing a value to the dynamically allocated string
    std::cout << "Enter a value for the dynamically allocated string: ";
    std::cin. ignore();  //ignore newline character left in buffer
    std::getline(std::cin, *dynamicString);

    //output the value of dynamically allocated integer and string
    std::cout << "value of the dynamically allocated integer:" << *dynamicInteger <<std::endl;
    std::cout << "value of the dynamically allocated string:" << *dynamicString <<std::endl;

    //Deallocate memory inorder prevents it leaks
    delete dynamicInteger;
    delete dynamicString;

    return 0;
    
}