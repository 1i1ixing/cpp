#include <iostream>
using namespace std;

class Point{
    public:
    double x;
    double y;
    Point(){ // Default Constructor: Method that is called when an instance is created
        x = 0.0;
        y = 0.0;
        cout << "Default " << '<' << x << ',' << y << '>' << " initialized\n";
    }
    Point(double xaxis, double yaxis){  // Parametrized Constructor: Method that is called when an instance is created (default copy constructor)
        x = xaxis;
        y = yaxis;
        cout << "Point " << '<' << x << ',' << y << '>' << " initialized\n";
    }
    Point(Point &point){ // safe copy constructor
        x = point.x;
        y = point.y;
    }
    void print(){
        cout << '<' << x << ',' << y << '>' << endl;
    }
};

class Vector{
    private: // can only be accessed within the class, c++ default to be private
        Point start;
        Point end;
    
    public: // can be accessed from anywhere 
    // struct is a carry-over from the C;
    // In C++, struct is essentially the same as class, except struct’s default access modifier is public 
        Vector(): start(0.0, 0.0), end(1.0, 1.0) { 
            // Default constructor using initializer list
            cout << '<' << start.x << ',' << start.y << "> -> <" << end.x << ',' << end.y << '>' << endl;
        }
        Vector(double startx, double starty, double endx, double endy): start(startx, starty), end(endx, endy) { 
            // Parameterized constructor using initializer list
            cout << '<' << start.x << ',' << start.y << "> -> <" << end.x << ',' << end.y << '>' << endl;
        }
        Vector(Point start_point, Point end_point): start(start_point), end(end_point){
            cout << '<' << start.x << ',' << start.y << "> -> <" << end.x << ',' << end.y << '>' << endl;
        }
        Point get_start(){
            return start;
        }
        Point get_end(){
            return end;
        }
};

int main(){
    Point point_1;
    Point point_2(1.0, 1.0);
    point_1.print();
    point_2.print();
    cout << "----------\n";
    Point point_copy = point_2; // default copy constructor
    point_copy.print();
    cout << "----------\n";
    point_copy.x = 2;
    point_copy.print();
    point_2.print();
    cout << "----------\n";
    Point point_safe_copy = point_2; // safe copy constructor
    point_safe_copy.print();
    cout << "----------\n";
    // In C++, when you use an initializer list, 
    // you are directly calling the constructor of each member variable with the provided arguments before the body of the constructor executes.
    Vector vec_1;
    Vector vec_2(5.0,5.0,6.0,6.0);
    Point start(5.0,5.0);
    Point end(6.0,6.0);
    Vector vec_3(start, end);
    vec_3.get_start().print();
    vec_3.get_end().print();

    return 0;
}

