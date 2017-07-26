#include "bubba.h"

int bubba::attack(){
    int damage = rollDice(2,6);
    cout << name << " attack with "<<damage<<" hit points!"<<endl;
    return damage;
}


int bubba::defense(){
    int def = rollDice(2,6);
    cout << name << " generated " << def << " points to defend attack!"<<endl;
    return def;
}
