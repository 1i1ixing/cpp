#include <iostream>
using namespace std;

int raisetoPower(int base, int exponent){
    int result = 1;
    for(int i = 1; i <= exponent; ++i){
        result = result * base;
    }
    return result;
}

int main(){
    int x;
    int y;
    cout << "Please input the base and exponent\n";
    cin >> x;
    cin >> y;
    cout << "Result: " << raisetoPower(x, y) << endl; // endl is the same as \n 
    return 0;
}