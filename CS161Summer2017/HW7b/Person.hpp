#include<iostream>
#include<string>
using namespace std;
#ifndef PERSON_INCLUDE
#define PERSON_INCLUDE
class Person
{
   public:
        string name;
        double age;
public:
     Person()
     {
         name="Random";
         age=1;
     }
        Person(string, double);
        double getAge();
        string getName();
};
#endif

