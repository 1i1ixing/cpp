#include <iostream>
#include <string>
using namespace std;

class Vehicle{
    protected: // protected is largely equivalent to private, 
    // To allow derived classes but not outside code to access data members and member functions, we must declare them as protected.
        const string license;
        int year;
    
    public:
        Vehicle(const string &myLicense, int myYear): license(myLicense), year(myYear){} // constuctor with member initializer syntax: dataMember(initialValue)
        virtual const string getDesc(){
            return license + " from " + to_string(year);
        }
        // virtual const string getDesc() = 0;
        const string &getLicense(){
            return license;
        }
        int getYear(){
            return year;
        }
};

class Car: public Vehicle{ // Makes Car inherit from Vehicle
    public:
        const string style;
        Car(const string &myLicense, int myYear, const string &mystyle): Vehicle(myLicense, myYear), style(mystyle){}
        const string &getStyle(){
            return style; // returning a reference not a copy to improve efficiency
        }
        virtual const string getDesc(){
            return style + " from " + to_string(year);
        }
};

class Truck: public Vehicle{ // Makes Truck inherit from Vehicle
    public:
        const string style;
        Truck(const string &myLicense, int myYear, const string &mystyle): Vehicle(myLicense, myYear), style(mystyle){}
        const string &getStyle(){
            return style; // returning a reference not a copy to improve efficiency
        }
        virtual const string getDesc(){
            return style + " from " + to_string(year);
        }
};

class Bus: public Vehicle{ // Makes Bus inherit from Vehicle
    public:
        const string style;
        Bus(const string &myLicense, int myYear, const string &mystyle): Vehicle(myLicense, myYear), style(mystyle){}
        const string &getStyle(){
            return style; // returning a reference not a copy to improve efficiency
        }
        // no getDesc when Vehicle's virtual const string getDesc() = 0; object of Bus cannot be initiated
};

int main(){
    Vehicle myVehicle("Lixing's vechile", 2025);
    const string myDesc = myVehicle.getDesc(); // const variable must be initilized at the time of declaration
    const string myLicense = myVehicle.getLicense();
    int myYear = myVehicle.getYear();
    cout << myDesc << endl;
    cout << myLicense << endl;
    cout << myYear << endl;
    cout << "----------" << endl;
    Car myCar("Lixing's vechile", 2005, "Lixing's car");
    const string myCarDesc = myCar.getDesc();
    const string myCarLicense = myCar.getLicense();
    int myCarYear = myCar.getYear();
    const string myCarStyle = myCar.getStyle();
    cout << myCarDesc << endl;
    cout << myCarLicense << endl;
    cout << myCarYear << endl;
    cout << myCarStyle << endl;
    cout << "----------" << endl;
    Car testCar("VANITY", 2003, "Test Car");
    Vehicle *vPtr = &testCar; // every car is a vehicle
    cout << vPtr -> getDesc() << endl; // (without virtual) this will call the Vehicle version of getDesc, even though the object pointed to is actually a Car
    cout << (*vPtr).getDesc() << endl; // (with virtual) Usually we’d want the program to select the correct function at runtime based on which kind of object is pointed to.
    // Selecting the correct function at runtime is called dynamic dispatch. 
    // Pure Virtual Function
    // virtual const string getDesc() = 0; in the Vehicle class, 
    // A class is abstract if it has at least one pure virtual function.
    // this implies that one can no longer create an instance of Vehicle, it only defines an interface
    // one can only create instances of Cars, Trucks, and other derived classes which do implement the getDesc method, if no getDesc in the derived class, it cannot be initiated
    return 0;
}