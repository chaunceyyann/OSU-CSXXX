#include<iostream>
#include<string>
#include"creature.h"


#ifndef VAMPIRE_H
#define VAMPIRE_H

using namespace std;

class vampire:public creature
{
    private:
        string n;
    public:
        vampire(string n) : creature("Vampire"),n(name=n){};
        int defense();
        int attack();
};
#endif
