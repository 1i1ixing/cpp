#include <iostream>
using namespace std;

int main(){
    long arr[] = {1,10,100,1000};
    cout << arr << endl; //The name of an array is actually a pointer to the first element in the array.
    cout << &arr[0] << endl;
    cout << arr[3] << endl; // Writing arr[3] tells the compiler to return the element that is 3 away from the starting el­ement of arr

    long *ptr = arr;
    cout << "Current pointer points to: " << *ptr << endl;
    ++ptr;
    cout << "Now pointer points to: " << *ptr << endl;
    long *ptr2 = ptr + 2; // All addition and subtraction operations on pointers use the appropriate step size
    cout << "New pointer points to: " << *ptr2 << endl;

    long *ptr_subs = arr;
    cout << "Pointer-subscript notation: " << ptr_subs[3] << endl;
    cout << "Pointer-offset notation: " << *(ptr_subs + 3) << endl;

    char text1[] = {'T','H','I','S',' ','I','S',' ','A', ' ', 'S','T','R','I','N','G'};
    char text2[] = "THIS IS A STRING"; // This defines an array of character, thus modification is allowed
    const char *text3 = "THIS IS A STRING"; 
    // set a const char * to a string, you are setting a pointer to point to the first character in the array that holds the string.
    // string literals are of type const char[], thus only char *text3 will report warning, 
    // attempt to modify one of the character will repor error
    cout << text1 << endl; // cout treats it as a null-terminated string and prints its contents until it encounters the \0
    cout << "text1's address is (by&): " << &text1 << endl;
    cout << "text1's address is (by static_cast): " << static_cast<void*>(arr) << endl;
    cout << text2 << endl;
    cout << text3 << endl;
    cout << text3[3] << endl;
    cout << *(text3 + 3) << endl;

    return 0;
}