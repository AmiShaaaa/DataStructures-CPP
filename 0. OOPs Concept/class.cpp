#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;
    Hero()
    {
        cout << "Constructor called" << endl;
    }

    int getHealth()
    {
        return health;
    }
    int getLevel()
    {
        return level;
    }
    void setHealth(int h)
    {
        health = h;
    }
    void setLevel(char ch)
    {
        level = ch;
    }

    // void print(){
    //     cout << level << end;
    // }
};

int main()
{
    //object created satatically
    Hero ayush;
    //object created dynamically
    Hero *h = new Hero();









    /*
    // Static Allocation
    Hero Ayush;
    Ayush.setHealth(80);
    Ayush.setLevel('B');
    cout << "level is " << Ayush.level << endl;
    cout << "health is " << Ayush.getHealth() << endl;

    // Dynamic Allocation
    Hero *b = new Hero;
    b->setLevel('A');
    b->setHealth(70);
    cout << "level is " << (*b).level << endl;
    cout << "health is " << (*b).getHealth() << endl;

    cout << "level is " << b->level << endl;
    cout << "health is " << b->getHealth() << endl;

    // cout << "Size of Ayush is " << sizeof(Ayush) << endl;
    // // Ayush.health = 70;
    // cout << "Ayush health is " << Ayush.getHealth() << endl; // give garbage value
    // Ayush.setHealth(70);
    // Ayush.level = 'A';

    // cout << "Health is: " << Ayush.getHealth() << endl;
    // cout << "Level is: " << Ayush.level << endl;
    */
}