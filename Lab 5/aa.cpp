#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
    
 srand(time(nullptr));

 //generate random numbers
 int daysUntilExpiration = rand() % 12;

 if (daysUntilExpiration <= 0)
 {
    cout << "your subscription has expired.\n";
 }
 else if (daysUntilExpiration <= 1)

 {
    cout << "your subscription expires within a day!\n" ;
    cout << "Renew now and save 20%!\n";
 }
 else if (daysUntilExpiration <= 5)
 {
    cout << "your subscription expires in" << daysUntilExpiration << "days \n"; 
    cout << "Renew now and save 10%! \n";
 }
 else if (daysUntilExpiration <= 10)
 {
    cout << "your subscription will expire soon. Renew now!\n";
 }
 else 
 {
    cout << "your have an active subscription.\n";
 }

 return 0;

}