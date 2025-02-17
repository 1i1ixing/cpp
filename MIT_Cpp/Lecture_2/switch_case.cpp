#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "Please input one interger:\n";
    cin >> x;
    switch(x){
        case 0:
            cout << "Your input is equal to 0\n";
            break;
        default:
            if(x > 0){
                cout << "Your number is larger than 0\n";
            }else{
                cout << "Your number is smaller than 0\n";
            }
    }
    cout << "Thanks for using";
    return 0;
}