#include "medusa.h"

int medusa::attack(){
    cout << name << " Medusa attacks!" << endl;
    int damage = rollDice(2,6);
    if (damage == 12){
        cout << name << " Medusa rolls a 12 in Glare attack then the target has looked her in the eyes and is turned to stone." <<endl;
        cout << name << " Medusa wins!" << endl;
        damage = 9000;
    }
    else 
        cout << name << " attack with "<<damage<<" hit points!"<<endl;
    return damage;
}


int medusa::defense(){
    cout << name << " Medusa defends!" << endl;
    int def = rollDice(2,6);
    cout << name << " generated " << def << " points to defend attack!"<<endl;
    return def;
}
