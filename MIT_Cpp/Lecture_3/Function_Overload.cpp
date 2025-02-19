#include <iostream>
using namespace std;

void printyourinput(int num){
    cout << "Your input is: " << num << endl; 
}

void printyourinput(char *str){
    cout << "Your input is: " << str << endl;
}

int main(){
    int x;
    char *str;
    cout << "Please input an integer:" << endl;
    cin >> x;
    printyourinput(x);
    cout << "Please input a string:" << endl;
    cin >> str;
    printyourinput(str);
    return 0;
}