#include <iostream>
using namespace std;

int main(){
    int x;
    int y;
    cout << "Please Input two intergers\n";
    cin >> x;
    cin >> y;
    if(x > y){
        cout << "x is larger than y";
    }else if(x < y){
        cout << "x is smaller than y";
    }else{
        cout << "x and y are the same";
    }
    return 0;
}