#include <iostream>

int main(){
    int num1;
    int num2;
    int sum;
    
    std::cout << "Please input your first integer" << "\n";
    std::cin >> num1;
    std::cout << "Please input your second integer" << "\n";
    std::cin >> num2;
    sum = num1 + num2;
    std::cout << "The sum is: " << sum;
    
    char x; // Close the .exe until user inputs a character
    std::cin >> x;

    return 0;
} 