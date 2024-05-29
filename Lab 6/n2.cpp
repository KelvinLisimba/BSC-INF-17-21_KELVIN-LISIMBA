#include <iostream>
using namespace std;
int main() {
    //prompt the user for dimensions of the array
    int rows, columns;
    std::cout << "Enter the number of rows (not exceeding 3): ";
    std::cin >> rows;

    std::cout << "Enter the number of columns (not exceeding 3): ";
    std::cin >> columns;

    // Ensuring that dimensions don't exceed 3
    if (rows > 3 || columns > 3) {
        std::cout << "Dimensioons cannot exceed 3. Please try again.\n";
        return 1;
        
     }

    double** array = new double*[rows] ;
    for (int i=0; i < rows; i++) {
        array[i] = new double[columns];
    }
   
    std::cout << "Enter the values for the array: \n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout << "Enter value for element at [" << i << "][" << j <<"]: ";
            std::cin >> array[i][j];
        }
        
    }
    
    std::cout << "Values of the array:\n";
    for (int i = 0; i < rows; i++) 
    {
         for (int j = 0; j < columns; j++)
         {
     std::cout << array[i][j] << " ";
    }
    std::cout << std::endl;
    }

    for (int i = 0; i < rows; i++)
    {
        delete[] array[i];
    }

    delete[] array;

    return 0;
    
}