#include<bits/stdc++.h>
using namespace std;

class Car {
    char* Model;
public:
    class Ac {
        float temperature;
        public:
        Ac() { cout << "Ac is ON" << endl; }
        ~Ac() { cout << "Ac is OFF" << endl; }
        void setTemp(float temp) {
            temperature = temp;
            cout << "AC Temp: " << temperature << endl;
        }
    };
    Ac* cooler;
    Car(char* model) {
        cout << "Car is ON" << endl;
        model = model;
    }
    void SwitchOnAc() {
        cooler = new Ac;
        float temp;
        cout << "Enter the Temp:" << endl;
        cin >> temp;
        cooler->setTemp(temp);
    }
    void SwitchOffAc() {
        delete cooler;
    }
    ~Car() { delete cooler; cout << "Car is OFF" << endl; }
};
int main() {
    char model[] = "Sedan";
    Car* c1 = new Car(model);
    c1->SwitchOnAc();
    c1->SwitchOffAc();
    c1->SwitchOnAc();
    delete c1;
    return 0;
}
