#include<iostream>
#include<string>
using namespace std;

class person
{
    private:
        string name;
        double age;
    public:
        person(string,double);
        string getName();
        double getAge();
};

double stdDev(person, int);
