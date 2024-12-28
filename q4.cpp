#include <iostream>
#include <ctype.h>
using namespace std;
int main(){
    const int noe=26;
    char arr[noe];
    char choice;
    int arrSize=0,emp;
    
    cout<<"Etner the total nuber of employyes"<<endl;
    cin>>emp;

    string name[emp];
    for(int i=0;i<emp;i++){
        cout<<"Enter the name of employee "<<i+1<<endl;
        cin>>name[i];

        cout<<"Enter office choice"<<endl;
        cin>>choice;

        choice=toupper(choice);
        arrSize++;

        for(int i=0;i<arrSize;i++){
            if(choice==arr[i]){
                cout<<"Enter some other letter"<<endl;
            }
        }
        arr[i]=choice;
    }

    cout<<"Vacant offices are "<<noe-emp<<endl;

    cout<<"Occupied offices are "<<endl;
    for(int i=0;i<arrSize;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Acquired office "<<emp<<endl;
    for(int i=0;i<arrSize;i++){
        cout<<name[i]<<" has occupied "<<arr[i]<<endl;
    }
    
    return 0;
}