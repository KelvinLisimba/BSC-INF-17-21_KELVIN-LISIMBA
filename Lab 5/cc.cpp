#include <iostream>
#include <string>

using namespace std;
int main () {

    //array has been declared and initialized
    string elements[] ={"B123", "C234", "A345", "C15","B177","G3003", "C235", "B179" };
    int size = sizeof(elements) / sizeof(elements[0]);
    for (int i = 0; i < size; ++i) {
       // to check if element starts with letter "B"
       if (elements[i][0] == 'B'){
        // output element starts with "B"
        cout << elements[i] << endl;
       }
    }
   return 0; 
}
