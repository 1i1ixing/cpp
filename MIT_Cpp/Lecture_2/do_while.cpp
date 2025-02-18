#include <iostream>
using namespace std;

int main(){
    int x;
    int sum = 0;
    int i = 0; // this will prevent the summation when input x is 0
    cout << "Please input an interger that you want to sum up:\n";
    cin >> x;
    do{
        sum = sum + i;
        i = i + 1;
    }while(i <= x);
    cout << "The sum is:" << ' ' << sum;
    return 0;
}