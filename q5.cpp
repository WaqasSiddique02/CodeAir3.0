#include <iostream>
using namespace std;
class game
{
private:
    int health, attack, defense, speed, damage;
    string name;
    string chara[10];

public:
    game(string name, int health, int attack, int defense, int speed)
    {
        this->name = name;
        this->attack = attack;
        this->defense = defense;
        this->health = health;
        this->speed = speed;
    }

    void dmg()
    {
        damage = attack - defense;
    }
};

int main()
{
    int atta, healt, def, sped;
    string name;

    cout << "Enter Name, Health, Attack, Def, Speed: " << endl;
    cin >> atta>>healt>>def>>sped;

    if (healt >= 50 && healt <= 200)
    {
        if ((atta >= 10 && atta <= 100) && (def >= 10 && def <= 100) && (sped >= 10 && sped <= 100))
        {
            game g[] = {game(name, atta, healt, def, sped)};

            cout << "Battle starts!";
            cout << "Health: " <<healt<<endl;
            cout << "Attack: " <<atta<<endl;
            cout << "Defense: " <<def<<endl;
            cout << "Speed: " <<sped<<endl;
        }
    }
}