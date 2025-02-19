#include <iostream>
using namespace std;

void printNumberIfEven(int num){ // If no values are returned, give the function a void return type 
    if(num % 2 == 1){
        cout << "The number is odd";
    }else{
        cout << "The number is even";
    }
}

int main(){
    int x;
    cout << "Please input an integer:" << endl;
    cin >> x;
    printNumberIfEven(x);
    return 0;
}