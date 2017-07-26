#include<iostream>
#include<string>
#include <unistd.h>
#include"creature.h"
#include"bubba.h"
#include"medusa.h"
#include"vampire.h"
using namespace std;
void printBubba(bubba);
void printMedusa(medusa);
void printVampire(vampire);
int main(){
    srand((unsigned)time(0)); 
    bubba b1("\033[0;31mNiceGuy\033[0m");
    medusa m1("\033[0;36mJaja\033[0m");
    vampire v1("\033[0;35mOldSchool\033[0m");
    printBubba(b1);
    printMedusa(m1);
    printVampire(v1);
    while (1){
        sleep(1);
        switch(rand()%6){
            case 0: m1.applyDamage(m1.defense(),b1.attack());
                    printMedusa(m1);break;
            case 1: v1.applyDamage(v1.defense(),b1.attack());
                    printVampire(v1);break;
            case 2: b1.applyDamage(b1.defense(),m1.attack());
                    printBubba(b1);break;
            case 3: b1.applyDamage(b1.defense(),v1.attack());
                    printBubba(b1);break;
            case 4: m1.applyDamage(m1.defense(),v1.attack());
                    printMedusa(m1);break;
            case 5: v1.applyDamage(v1.defense(),m1.attack());
                    printVampire(v1);break;
        }
        if (b1.isDead()||m1.isDead()||v1.isDead())
            break;
    }
    printBubba(b1);
    printMedusa(m1);
    printVampire(v1);
    return 0;
}
void printBubba(bubba obj){
    cout << obj.getName() << " " << obj.getType() << " has " << obj.getArmor() << " armor points and " << obj.getStrength() <<" strength points."<< endl;
    cout << "=================================================="<<endl;
}
void printMedusa(medusa obj){
    cout << obj.getName() << " " << obj.getType() << " has " << obj.getArmor() << " armor points and " << obj.getStrength() <<" strength points."<< endl;
    cout << "=================================================="<<endl;
}
void printVampire(vampire obj){
    cout << obj.getName() << " " << obj.getType() << " has " << obj.getArmor() << " armor points and " << obj.getStrength() <<" strength points."<< endl;
    cout << "=================================================="<<endl;
}



