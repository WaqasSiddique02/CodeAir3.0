#include <iostream>
using namespace std;

class pet{
private:
    int happiness,energy,hunger,hours;
    bool game;
    
public:

    pet(int happiness,int energy,int sadness,int hours){
        this->happiness=happiness;
        this->energy=energy;
        this->hunger=hunger;
        this->hours=hours;
        game=true;
    }

    void hoursCal(){
        if(hours>=1){
            for(int i=1;i<hours;i++){
                happiness=happiness-5;
                hunger=hunger+10;
                energy=energy-15;
            }

            if(hunger>=80){
                game=false;
            }else if(happiness<20){
                game=false;
            }else if(energy<20){
                game=false;
            }

            cout<<"Happiness"<<happiness<<endl;
            cout<<"Hunger"<< hunger<<endl;
            cout<<"energy"<<energy<<endl;
        }
    }

};

int main(){
    int happy,ener,hunger,hours;
    cout<<"Enter the number of hours to care for the pet: " << endl;
    cin>>hours;
    cout << "Initial Status" << endl;
    cout<<"Enter the inital level of happiness energy and hunger"<<endl;
    cin>>happy>>ener>>hunger;
    pet p(happy,ener,hunger,hours);
    while(hours>=0){
        cout<<"Enter the operation you want to perform((FEED,PLAY,REST)"<<endl;
        p.hoursCal();
        
    }

    return 0;
}