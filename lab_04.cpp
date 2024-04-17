#include <iostream>
#include <string>

using namespace std;

class Transport {
protected:
    string fuel;

public:
    Transport(string fuel) : fuel(fuel) {}

    void accelerate() {
        cout << "Accelerating" << endl;
    }
    void brake() {
        cout << "Braking" << endl;
    }
    void drive() {
        cout << "Drive" << endl;
    }

    string Getfuel() {
        return fuel;
    }
    void Setfuel(string valuefuel) {
        fuel = valuefuel;
    }
};

class Bus : public Transport {
private:
    int capacity;
    int year;
    string mark;

public:
    Bus(string fuel, int capacity, int year, string mark) : Transport(fuel), capacity(capacity), year(year), mark(mark) {}

    int Getcapacity() {
        return capacity;
    }
    void Setcapacity(int valuecapacity) {
        capacity = valuecapacity;
    }

    int Getyear() {
        return year;
    }
    void Setyear(int valueyear) {
        year = valueyear;
    }

    string Getmark() {
        return mark;
    }
    void Setmark(string valuemark) {
        mark = valuemark;
    }

    void print() {
        cout << "Fuel: " << fuel << endl;
        cout << "Capacity: " << capacity << endl;
        cout << "Year: " << year << endl;
        cout << "Mark: " << mark << endl;
    }
};

int main() {
    Bus bus_1("diesel", 70, 2017, "Opel");

    bus_1.accelerate();
    bus_1.brake();
    bus_1.drive();

    bus_1.print();

    bus_1.Setfuel("petrol");
    bus_1.Setcapacity(90);
    bus_1.Setyear(2005);
    bus_1.Setmark("Tesla"); 

    bus_1.print();

    return 0; 
}


