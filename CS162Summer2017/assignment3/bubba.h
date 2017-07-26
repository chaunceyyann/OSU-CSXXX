#include<iostream>
#include<string>
#include"creature.h"


#ifndef BUBBA_H
#define BUBBA_H

using namespace std;

class bubba:public creature
{
    private:
        string n;
    public:
        bubba(string n) : creature("Bubba"),n(name=n){};
        int defense();
        int attack();
};
#endif
