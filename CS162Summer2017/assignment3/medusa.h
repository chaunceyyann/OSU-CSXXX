#include<iostream>
#include<string>
#include"creature.h"


#ifndef MEDUSA_H
#define MEDUSA_H

using namespace std;

class medusa:public creature
{
    private:
        string n;
    public:
        medusa(string n) : creature("Medusa"),n(name=n){};
        int defense();
        int attack();
};
#endif
