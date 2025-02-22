#include <iostream>
#include <cctype> //character handling
#include <cstring> // string manipulation 
using namespace std;

int main(){
    char text1[] = {'H','e','l','l','o','\0'}; // '\0' this character is used to indicate the end of the string
    char text2[] = "Hello";
    char messy_text[] = "t6H0I9s6.iS.999a9.STRING";
    char current_char;
    char fragment1[] = "I'm a";
    char fragment2[] = " string!";
    char fragment3[20];
    char complete_string[20] = ""; // char same as pure complete_string[20]
    char partial_initialize_string[20] = "partial string"; // partially initialize a string
    int partial_arr[20] = {1,2,3}; // partially initialize an array, remaining elements would be automatically initialized with the default value of 0

    cout << text1 << endl;
    cout << text2 << endl;

    current_char = messy_text[0];
    for(int i = 0; current_char != '\0';){
        if(isalpha(current_char)){ // alphabetic character
            cout << (char)(isupper(current_char) ? tolower(current_char) : current_char); // (condition) ? ifTrue : ifFalse
            // std::tolower() return value is int. And std::cout print the exact value that appears to it. need to use (char) to typecast the ASCII value to character
        }else if(ispunct(current_char)){ // punctuation character
            cout << ' ';
        }
        i = i + 1;
        current_char = messy_text[i]; // you can write current_char = current_char[++i], it means i is incremented by 1, and return the incremented i
    }
    cout << endl;

    strcpy(fragment3, fragment1);
    strcat(complete_string, fragment3);
    strcat(complete_string, fragment2);
    cout << fragment3 << endl;
    cout << complete_string << endl;

    cout << partial_initialize_string << endl;

    cout << partial_arr[0] << endl;
    cout << partial_arr[19] << endl;
    return 0;
}