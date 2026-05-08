#include <iostream>
using namespace std;

class Device {
public:
    void powerOn() {
        cout << "Device powered on." << endl;
    }
};

class Computer : public Device {
public:
    void process() {
        cout << "Computer is processing." << endl;
    }
};

class Laptop : public Computer {
public:
    void carry() {
        cout << "Laptop is portable." << endl;
    }
};

int main() {
    Laptop l;

    l.powerOn();
    l.process();
    l.carry();

    return 0;
}