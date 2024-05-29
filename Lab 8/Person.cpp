#include <iostream>
#include "Person.h"

Person::Person(){
    mWeight = 0.0f;
    mFirstName = " ";
    mAge = 0;
}
Person::Person(float newWeight, string newFirstName, int newAge){
    mWeight = newWeight;
    mFirstName = newFirstName;
    mAge = newAge;
}
Person::Person(float newWeight)
{
    mWeight = newWeight;
    mFirstName = " ";
    mAge = 0;
}

Person::~Person(){
    //unused for now
}

float Person::operator + (const Person& otherPerson){
    return mWeight + otherPerson.mWeight; 
}

bool Person::operator==(const Person& otherPerson) const{
    return mFirstName == otherPerson.mFirstName;
}

bool Person::operator!=(const Person& otherPerson) const{
    return mFirstName != otherPerson.mFirstName;
}

bool Person::operator < (const Person& otherPerson) const{
    return mAge != otherPerson.mAge;
}

bool Person::operator > (const Person& otherPerson) const{
    return mAge != otherPerson.mAge;
}

Person::operator int(){
    return mAge;
}

Person::operator std::string(){
    return mFirstName;
}

Person::operator float(){
    return mWeight;
}