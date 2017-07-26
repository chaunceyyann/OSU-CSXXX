#include "vampire.h"

int vampire::attack(){
    int damage = rollDice(1,12);
    cout << name << " attack with "<<damage<<" hit points!"<<endl;
    return damage;
}


int vampire::defense(){
    int def = rollDice(1,6);
    cout << name << " generated " << def << " points to defend attack!"<<endl;
    return def;
}
