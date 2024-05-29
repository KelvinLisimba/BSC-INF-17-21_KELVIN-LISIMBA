#include <iostream>
#include<limits>
using namespace std;

int main() {
    int number;

    do
    {
        std::cout << "Enter an integer value between 5 and 10: ";
       std:: cin >> number;

        if (number >= 5 && number <=10){
           std:: cout <<"your input value has been accepted";

        break;
        }
       else {
        std::cout << "sorry, you entered an invalid number, please try again.\n";
       }
    } while (true);

    return 0;
    
}