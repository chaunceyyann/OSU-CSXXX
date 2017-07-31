#include<iostream>
#include<string>
#include "Person.hpp"
using namespace std;
Person::Person(string x,double y)
{
     name=x;
     age=y;
}
string Person::getName()
{
     return name;
}
double Person::getAge()

{
    return age;
}
 
