#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>

using namespace std;

class Vehicle{
private:
    string id;
    string name;
    string brand;
    string color;
public:
    Vehicle(string id, string name, string brand, string color) {
        this->id = id;
        this->brand = brand;
        this->name = name;
        this->color = color;
    }
    virtual void To_String() {
        cout << id << " " << name << " " << brand << " " << color;
    }

    string get_BRAND(){
        return brand;
    }

    string get_ID() {
        return id;
    }
    virtual ~Vehicle(){};
};

class Motor : public Vehicle{
private:
    int max_speed;
    int price_motor;
public:
    Motor(string id, string name, string brand, string color, int max_speed, int price_motor) : Vehicle(id, name, brand, color) {
        this->max_speed = max_speed;
        this->price_motor = price_motor;
    }

    void To_String() {
        Vehicle::To_String();
        cout << " " << max_speed << " " << price_motor;
    }
    int get_price() {
        return price_motor;
    }
};

class Car : public Vehicle{
private:
    int horse_power;
    int price_car;
public: 
    Car(string id, string name, string brand, string color, int horse_power, int price_car) : Vehicle(id, name, brand, color) {
        this->horse_power = horse_power;
        this->price_car = price_car;
    }

    void To_String() {
        Vehicle::To_String();
        cout << " " << horse_power << " " << price_car;
    }

    int get_price() {
        return price_car;
    }
};
int main() {
    int n; cin >> n;
    cin.ignore();

    vector<Motor*> v1;
    vector<Car*> v2;
    while(n) {
        string id, name, brand, color;
        getline(cin, id);
        getline(cin, name);
        getline(cin, brand);
        getline(cin, color);

        if(id[0] == 'X') {
            int max_speed, price_motor; cin >> max_speed >> price_motor;
            cin.ignore();

            Motor* motor = new Motor(id, name, brand, color, max_speed, price_motor);
            v1.push_back(motor);
        }
        else if(id[0] == 'O') {
            int horse_power, price_car; cin >> horse_power >> price_car;
            cin.ignore();

            Car* car = new Car(id, name, brand, color, horse_power, price_car);
            v2.push_back(car);
        }
        --n;
    }
    int a, b; cin >> a >> b;


    cout << "DANH SACH OTO : " << endl;
    for(auto it : v2) {
        if(it->get_price() >= a && it->get_price() <= b) {
            it->To_String();
            cout << endl;
        }
    }
    cout << "DANH SACH XE MAY : " << endl;
    for(auto it : v1) {
        if(it->get_price() >= a && it->get_price() <= b) {
            it->To_String();
            cout << endl;
        }
    }
    return 0;
}

