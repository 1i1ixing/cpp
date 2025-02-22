#include <iostream>
using namespace std;

long array_sum(const int arr[], int length);

int main(){
    int arr[] = {1,2,3,4,5,6};
    int *p1 = &arr[0]; // & means get the address of the int, then p1 is the address, *p will get the value
    int *p2 = arr; // arr decays to a pointer
    int length = sizeof(arr) / sizeof(arr[0]); // the sizeof() operator returns the size of a type in bytes, int has 4 bytes
    cout << "The sum of the array is: " << array_sum(arr, length) << endl;
    cout << arr << endl;
    cout << p1 << endl;
    cout << *p1 << endl;
    cout << p2 << endl;
    return 0;
}

long array_sum(const int arr[], int length){ 
// arrays are passed by reference and so any changes made to the array within the function will be observed in the calling scope
    long sum = 0;
    for(int i = 0; i <= (length - 1); ++i){
        sum = sum + arr[i];
    }
    return sum;
}
