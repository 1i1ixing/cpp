#include <iostream>
using namespace std;

void squareByptr(int *ptr);
void squareByref(int &num);

int main(){
    int x = 5;
    int y = 10;
    int *p = &x;
    int *ptr;
    ptr = &y;
    int &num = x; // References are just pointers that are dereferenced every time they are used. Makes num a reference to , or "alias" of x
    cout << "p's value is: " << p << endl;
    cout << "Dereference p is: " << *p << endl;
    cout << "Dereference ptr is: " << *ptr << endl;
    squareByptr(p); // square x by pointer
    cout << "Square by pointer is: " << x << endl;
    squareByref(x);
    cout << "Square by reference is: " << x << endl;
    int &num2 = num;
    cout << "Current x is: " << x << endl;
    num2 = 666; // cannot change the location to which a reference points, references must always be initialized when they are declared
    cout << "Updated x is: " << x << endl;

    const int z = 100;
    const int * const ptr_z = &z; // forbids  changing  either  the  address  ptr  contains  or  the  value  it  points  to
    cout << "unchangeable pointer to an unchangeable int: " << *ptr_z;

    int *ptr_null = 0; 
    // int *ptr_null = NULL, or int *ptr_null = nullptr, we can use if(ptr_null == NULL) or if(ptr_null == nullptr) to check with it is null pointer
    // Dereferencing a NULL pointer causes undefined behavior that may lead to runtime errors like segmentation faults.
    // We need to check explicitly for NULL pointers before dereferencing it

    return 0;
}

void squareByptr(int *ptr){
    *ptr = *ptr * *ptr;
}

void squareByref(int &num){
    num = num * num;
}