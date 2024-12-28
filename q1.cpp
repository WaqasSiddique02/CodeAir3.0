#include <iostream>

using namespace std;

string tobinary(int x) {
    int bin;
    string ret = "";
    if(x<=0)
        return "Is Less or Equal to 0";

    else {
        while(x>0) {
            bin = x%2;
            x=x/2;
            ret = to_string(bin) + ret;
        }
    }

    return ret;
}

int main() {

    int n;
    string binary;

    cout<<"Enter a Number: " <<endl;
    cin>>n;

    if(isdigit(n)) {
        binary = tobinary(n);
        cout << "The binary is: " << binary << " and the length is: " << binary.length() << endl;
    } else {
        cout << "Enter a Numeric Value Greater than 0" << endl;
    }

    return 0;
}
