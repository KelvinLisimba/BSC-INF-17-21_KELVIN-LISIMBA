#include <iostream>
#include <fstream>

using namespace std;

int main() {
    //create and open a text file
    ofstream myfile("ExampleFile.txt");

    //close the file
    myfile.close();

    return 0;
}