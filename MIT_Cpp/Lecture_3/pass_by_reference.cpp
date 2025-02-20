#include <iostream>
using namespace std;

void swap(int &, int &); // Pass by reference allows a function to modify a variable without having to create a copy of it

int main(){
    int x;
    int y;
    cout << "Please input two integers that you want to swap:\n";
    cin >> x;
    cin >> y;
    swap(x, y);
    cout << "x is: " << x << endl; // Loops and if/else statements have their own scopes (Loop counter is at the same scope as body)
    cout << "y is: " << y << endl; // Can only access to the current scope and all upper scopes, cannot access parallel groups and all lower groups
    return 0;
}

void swap(int &num1, int &num2){
    int temp;
    temp = num1; // The reference name can be used to implicitly reference a value.
    num1 = num2; // Parameters can’t be moved/reassigned to another memory address.
    num2 = temp;
}

// x = 3    y = 4
// ^        ^
// |        |
// num1     num2
// temp = 3