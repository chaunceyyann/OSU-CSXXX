#include<iostream>
#include<string>
#include<time.h>
#include<cstdlib>

#ifndef CREATURE_H
#define CREATURE_H 

using namespace std;

class creature
{
    protected:
        string name;
        string type;
        int strength;
        int armor;
        bool dead;

    public:
        creature(string);
        string getName();
        string getType();
        bool isDead();
        int rollDice(int, int);
        int getArmor();
        int getStrength();
        void setArmor(int);
        void setStrength(int);
        void applyDamage(int, int); // hits, def
};

#endif
