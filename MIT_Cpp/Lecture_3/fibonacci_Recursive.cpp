#include <iostream>
using namespace std;

int fib(int num);

int main(){
    int x;
    cout << "Please input an integer:" << endl;
    cin >> x;
    cout << "the fib number at your input is: " << fib(x);
    return 0;
}

int fib(int num){
    if(num == 0 || num == 1){
        return 1;
    }else{
        return fib(num - 1) + fib(num - 2);
    }
}
