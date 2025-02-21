#include "demo_library.h"
// Input "g++ use_library.cpp demo_library.cpp -I include -o use_library.exe" in the terminal
// This will create a use_library.exe file, then you run the exe in the terminal by .\use_library.exe
// You need to mannually link the compiled main function with the library (the run buttom cannot link these two)
//.\use_library.exe is to trust the prompt
#include <iostream> 
using namespace std;

int main(){
    int x;
    int y;
    cout << "Please input two integers:\n";
    cin >> x;
    cin >> y;
    cout << "The sum is: " << summation(x ,y);
    return 0;
}