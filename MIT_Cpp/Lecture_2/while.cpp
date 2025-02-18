#include <iostream>
using namespace std;

int main(){
    int x;
    int i = 1;
    int sum = 0;
    cout << "Please input an interger that you want to sum up:\n";
    cin >> x;
    while (i <= x){
        sum = sum + i;
        i = i + 1;
    }
    cout << "The sum is:" << ' ' << sum;
    return 0;
}