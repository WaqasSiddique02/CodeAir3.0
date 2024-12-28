#include <iostream>

using namespace std;

int main() {
    int priceOfColor=5,budget,result,num1,num2,num;
    string res;
    
    cout << "Enter your budget" << endl;
    cin>> budget;

    if(budget<0) {
        cout << "Invalid Budget" << endl;
        return 0;
    }

    result =budget/priceOfColor;
    cout << "You can buy " << result << " color(s)" << endl;
    int color[result];

    for(int i=0;i<result;i++){
        cout<<"Enter a valid color code "<<i+1<<endl;
        cin>>color[i];

        num1=color[i]; //Breaking the integer into two separate ints to check their sum and divisibility
        num1=num1%10;
        num2=color[i]/10;
        num = num1 + num2;
        
        if(color[i]>=10&& color[i]<=99){ //checking conditions and divisibility and converting to string
            if(num%5==0) {
                res = to_string(color[0]) + to_string(color[result-1]);
            }
        }   else{
             cout<<"Color code must be between 10 and 99 enter the value again"<<endl;
             i--;
        }
    }

    cout << "Desired Color Code is: " << res;

return 0;
}