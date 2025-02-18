#include <iostream>
using namespace std;

int main(){
    int x;
    int sum = 0;
    cout << "Please input an interger that you want to sum up:\n";
    cin >> x;
    for(int i = 1; i <= x; i = i + 1){
    // if int i = 1 is outside the for loop
    // then for(; i <= x; i = i + 1)
        sum = sum + i;
    }
    cout << "The sum is:" << ' ' << sum;
    return 0;
}