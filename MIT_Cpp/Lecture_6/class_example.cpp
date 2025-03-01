#include <iostream>
using namespace std;

// class - a user-defined datatype
class MITstudent{ // name
    public:
    const char *name; // field or member
    int studentID; // field or member
};

class Point{
    public:
    double x;
    double y;
    void print(){
        cout << '<' << x << ',' << y << '>';
    }
    void offset(double offsetX, double offsetY){
        x += offsetX;
        y += offsetY;
    }
};

class Vector{
    public:
    Point start; // field or member
    Point end; // field or member
    void print(){ // method, implicitly pass the current instance, compare to python, you don't need "self"
        cout << '<' << start.x << ',' << start.y << "> -> <" << end.x << ',' << end.y << '>' << endl;
    }
    void print_upgrade(){
        start.print();
        cout << " -> ";
        end.print();
        cout << endl;
    }
    void offset(double x, double y){
        start.x += x;
        end.x += x;
        start.y += y;
        end.y += y;
    }
    void offset_upgrade(double x, double y){
        start.offset(x, y);
        end.offset(x, y);
    }
};

void printVec(Vector vec){ // Passing by value passes a copy of the class instance to the function;
    cout << '<' << vec.start.x << ',' << vec.start.y << "> -> <" << vec.end.x << ',' << vec.end.y << '>' << endl;
};

void offsetVec(Vector &vec, double x, double y){ // When a class instance is passed by reference, changes are reflected in the original
    vec.start.x += x;
    vec.end.x += x;
    vec.start.y += y;
    vec.end.y += y;
}

int main(){
    MITstudent student1; // declare instance
    MITstudent student2;
    student1.name = "Geza";
    student1.studentID = 123456789;
    student2.name = "Jesse";
    student2.studentID = 987654321;

    Vector vec1;
    Vector vec2;
    vec1.start.x = 3.0;
    vec1.start.y = 4.0;
    vec1.end.x = 5.0;
    vec1.end.y = 6.0;
    vec2.start = vec1.start;
    vec2.end = vec1.end;
    cout << '<' << vec1.start.x << ',' << vec1.start.y << "> -> <" << vec1.end.x << ',' << vec1.end.y << '>' << endl;
    cout << '<' << vec2.start.x << ',' << vec2.start.y << "> -> <" << vec2.end.x << ',' << vec2.end.y << '>' << endl;
    cout << "----------" << endl;
    vec2.start.x = 30;
    vec2.start.y = 40;
    printVec(vec1);
    printVec(vec2);
    offsetVec(vec2, 100, 100);
    printVec(vec2);
    cout << "----------" << endl;
    vec2.print();
    vec2.offset(1000, 1000);
    vec2.print();
    cout << "----------" << endl;
    vec2.print_upgrade();
    vec2.offset_upgrade(10000, 10000);
    vec2.print_upgrade();

    return 0;
}