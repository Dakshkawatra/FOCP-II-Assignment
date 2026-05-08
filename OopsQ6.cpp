#include <iostream>
using namespace std;

class Temperature {
private:
    float celsius;

public:
    void inputTemperature() {
        cout << "Enter Temperature in Celsius: ";
        cin >> celsius;
    }

    float convertToFahrenheit() {
        return (celsius * 9 / 5) + 32;
    }

    void displayResult() {
        cout << "\nTemperature in Fahrenheit: "
             << convertToFahrenheit() << endl;
    }
};

int main() {
    Temperature t;
    t.inputTemperature();
    t.displayResult();

    return 0;
}