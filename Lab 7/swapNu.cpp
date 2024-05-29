#include <iostream>
using namespace std;

//swap function
void swapz(int& A, int& B ){
    int temp = A;
    A = B;
    B = temp;
}

int main(){
    int varA = 25;
    int varB = 100;
   
    cout << "varA before swap: " << varA << endl; //varA is 25
    cout << "VarB before swap: " << varB << endl; //varB is 100

    //call the function

    swapz(varA, varB);
        cout<<"VarA after swaping is: "<<varA<<endl;
        cout<<"VarB after swaping is: "<<varB<<endl;
        return 0;
    

    }

