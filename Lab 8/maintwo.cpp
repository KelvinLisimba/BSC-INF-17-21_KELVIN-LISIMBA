#include <iostream>
#include "Person.h"

using namespace std;

int main(){
    cout<<endl;
    cout<<"The program outputs the following:    \n";
    Person Jane = Person(60.0f, "Jane", 30);
    Person John = Person(75.0f, "John", 22);

    float totalweight = Jane + John;

    if(Jane == John){
        cout<<"This is the same person"<<endl;
        cout<<endl;
    }
    if(Jane != John){
        cout<<"This is not the same person"<<endl;
        cout<<endl;
    }
    if(Jane < John){
        cout<<"Jane is younger than John"<<endl;
        cout<<endl;
    }
    if(John>Jane){
        cout<<"John is older than Jane"<<endl;
        cout<<endl;
    }

    int JohnAge = John;
    cout<<"John's Age:  " <<JohnAge<<endl;
    cout<<endl;

    string janeFirstName = Jane;
    cout<<"Jane's FirstName" <<janeFirstName<<endl;
    cout<<endl;

    float janeWeight = Jane;
    cout<<"Jane's weight" <<janeWeight<<endl;
    cout<<endl;

    cout<<"Total weight:"<<totalweight<<endl;
    cout<<endl;

    return 0;
}