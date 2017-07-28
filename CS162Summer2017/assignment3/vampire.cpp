#include "vampire.h"

int vampire::attack(){
    cout << name << " Vampire attacks!" << endl;
    int damage = rollDice(1,12);
    cout << name << " attack with "<<damage<<" hit points!"<<endl;
    return damage;
}


int vampire::defense(){
    cout << name << " Vampire defends!" << endl;
    int def = rollDice(1,6);
    if (rand()%2==0){
        cout << name << " Vampire charm this opponent into not attacking! No damage was done." << endl;
        def=9999;
    }
    else 
        cout << name << " generated " << def << " points to defend attack!"<<endl;
    return def;
}
