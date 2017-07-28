#include<iostream>
#include<string>
#include <unistd.h>
#include"creature.h"
#include"bubba.h"
#include"medusa.h"
#include"vampire.h"
using namespace std;
#define TAKEABREAK 1    // take a break if you are not in attack or defend, add one strength
#define PACE 0.5          // sleep steps
#define BUBBA_MAX 12
#define MEDUSA_MAX 8
#define VAMPIRE_MAX 8
bool initGame(bubba,medusa,vampire);
void printStats(bubba,medusa,vampire,int);
int main(){
    srand((unsigned)time(0)); 
    bubba b1("\033[0;31mNiceGuy\033[0m");
    medusa m1("\033[0;36mJaja\033[0m");
    vampire v1("\033[0;35mOldSchool\033[0m");
    if (!initGame(b1,m1,v1)) return 0;
    while (1){
        switch(rand()%6){
            case 0: m1.applyDamage(m1.defense(),b1.attack());
                    printStats(b1,m1,v1,2);
                    if (TAKEABREAK && v1.getStrength()!=VAMPIRE_MAX){
                        cout << v1.getName() << " takes a break, recover one strength."<< endl;
                        v1.setStrength(v1.getStrength()+1);
                        printStats(b1,m1,v1,3);
                    }
                    break;
            case 1: v1.applyDamage(v1.defense(),b1.attack());
                    printStats(b1,m1,v1,3);
                    if (TAKEABREAK && m1.getStrength()!=MEDUSA_MAX){
                        cout << m1.getName() << " takes a break, recover one strength."<< endl;
                        m1.setStrength(m1.getStrength()+1);
                        printStats(b1,m1,v1,2);
                    }
                    break;
            case 2: b1.applyDamage(b1.defense(),m1.attack());
                    printStats(b1,m1,v1,1);
                    if (TAKEABREAK && v1.getStrength()!=VAMPIRE_MAX){
                        cout << v1.getName() << " takes a break, recover one strength."<< endl;
                        v1.setStrength(v1.getStrength()+1);
                        printStats(b1,m1,v1,3);
                    }
                    break;
            case 3: b1.applyDamage(b1.defense(),v1.attack());
                    printStats(b1,m1,v1,1);
                    if (TAKEABREAK && m1.getStrength()!=MEDUSA_MAX){
                        cout << m1.getName() << " takes a break, recover one strength."<< endl;
                        m1.setStrength(m1.getStrength()+1);
                        printStats(b1,m1,v1,2);
                    }
                    break;
            case 4: m1.applyDamage(m1.defense(),v1.attack());
                    printStats(b1,m1,v1,2);
                    if (TAKEABREAK && b1.getStrength()!=BUBBA_MAX){
                        cout << b1.getName() << " takes a break, recover one strength."<< endl;
                        b1.setStrength(b1.getStrength()+1);
                        printStats(b1,m1,v1,1);
                    }
                    break;
            case 5: v1.applyDamage(v1.defense(),m1.attack());
                    printStats(b1,m1,v1,3);
                    if (TAKEABREAK && b1.getStrength()!=BUBBA_MAX){
                        cout << b1.getName() << " takes a break, recover one strength."<< endl;
                        b1.setStrength(b1.getStrength()+1);
                        printStats(b1,m1,v1,1);
                    }
                    break;
        }
        if (b1.isDead()||m1.isDead()||v1.isDead())
            break;
        usleep(PACE*1000000);
    }
    printStats(b1,m1,v1,0);
    return 0;
}
bool initGame(bubba b1, medusa m1, vampire v1){
    cout << "=================================================="<<endl;
    cout << "\033[32;49m<<AttackNdefend>>\033[0m game started!" << endl;
    cout << "=================================================="<<endl;
    cout << v1.getName() << " Vampire, " << m1.getName() << " Medusa, and ";
    cout << b1.getName() << " Bubba have join in the game!"<<endl;
    cout << "=================================================="<<endl;
    printStats(b1,m1,v1,0);
    if (TAKEABREAK) cout << "Take a break mode is enanled. Creature recover 1 strength when not attacking or defending."<<endl;
    cout << "Pace is set to " << 1/float(PACE) << " round per second"<<endl;
    cout << "=================================================="<<endl;
    cout << "Hit [ENTER] to start the game. ";
    if (cin.get() != '\n') return false;
    for (int i=5; i>=0;i--){
        sleep(1);
        cout << "Game will start in " << i << endl;
    }
    cout << "=================================================="<<endl;
    return true;
}
void printStats(bubba b, medusa m, vampire v, int w){
    if ( w==1 || !w ){
        cout << b.getName() << " " << b.getType() << " has " << b.getArmor() << " armor points and " << b.getStrength() <<" strength points."<< endl;
        cout << "=================================================="<<endl;
    }
    if ( w==2 || !w ){
        cout << m.getName() << " " << m.getType() << " has " << m.getArmor() << " armor points and " << m.getStrength() <<" strength points."<< endl;
        cout << "=================================================="<<endl;
    }
    if ( w==3 || !w ){
        cout << v.getName() << " " << v.getType() << " has " << v.getArmor() << " armor points and " << v.getStrength() <<" strength points."<< endl;
        cout << "=================================================="<<endl;
    }
}
