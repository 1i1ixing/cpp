#include <iostream>
using namespace std;

int cube(int); //Function prototypes should match the signature of the method, though argument names don’t matter
int square(int num); // use a function prototype to inform the compiler you’ll implement it later, otherwise reorder the function

int main(){
    int x;
    cout << "Please input an integer:" << endl;
    cin >> x;
    cout << "Square is: " << square(x) << endl; //Function declarations need to occur before invocations
    cout << "Square is: " << cube(x) << endl;
    return 0;
}

int cube(int num){
    int result;
    return num * square(num);
}

int square(int num){
    int result;
    return num * num;
}