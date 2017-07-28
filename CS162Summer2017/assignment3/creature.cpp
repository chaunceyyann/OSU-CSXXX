#include<iostream>
#include"creature.h"
using namespace std;

creature::creature(string t) // initialization here
{
    dead=0;type=t;
    if (type=="Bubba"){       
        strength=12;
        armor=0;
    }
    else {       
        strength=8;
        armor=3;
    }
}
void creature::setArmor(int a)
{
    this->armor=a;
}
int creature::getArmor()
{
    return armor;
}
void creature::setStrength(int s)
{
    this->strength=s;
}
int creature::getStrength()
{
    return strength;
}
string creature::getName()
{
    return name;
}
string creature::getType()
{
    return type;
}
bool creature::isDead()
{
    bool dead = this->strength<=0?1:0;
    dead?cout<<name<<" "<<type<<" is died!"<<endl:dead=dead;
    return dead;
}
int creature::rollDice(int dices, int sides)
{
    int point = 0;
    int rd_int = rand();
    int *arr=new int[dices];
    cout << dices << " " << sides << "-sides";
    (dices==1)?cout<<" die is":cout<<" dice are";
    cout << " rolling."<< endl;
    cout << "Result: ";
    for (int i=0; i<dices; i++){
        arr[i]=rand()%sides+1;
        point+=arr[i];
        cout << arr[i] << " ";
    }
    cout << endl << "Total: " << point << endl;
    return point; 
}
void creature::applyDamage(int def, int hits)
{
    int damage = hits - armor - def;
    damage = damage<0?0:damage;
    strength -= damage;

    cout<<name<<" also has "<<armor<<" armor points."<<endl;
    cout<<name<<" takes damage "<<damage<<" points."<<endl;
}












