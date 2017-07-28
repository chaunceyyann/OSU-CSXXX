#include "bubba.h"

int bubba::attack(){
    cout << name << " Bubba attacks!" << endl;
    int damage = rollDice(2,6);
    cout << name << " attack with "<<damage<<" hit points!"<<endl;
    return damage;
}


int bubba::defense(){
    cout << name << " Bubba defends!" << endl;
    int def = rollDice(2,6);
    cout << name << " generated " << def << " points to defend attack!"<<endl;
    return def;
}
