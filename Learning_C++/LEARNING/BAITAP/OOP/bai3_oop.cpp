#include <bits/stdc++.h>
using namespace std;

class Customer{
    private :
    string id, name, adress, phoneNumber, email;

    public :
    Customer(string id, string name, string adress, string phoneNumber, string email) {
        this->id = id;
        this->name = name;
        this->adress = adress;
        this->phoneNumber = phoneNumber;
        this->email = email;
    }
    
    string tostring() {
        return id + " " + name + " " + adress + " " + phoneNumber + " " + email;
    }
};

int main() {
    string id, name, adress, phoneNumber, email;

    getline(cin, id);
    getline(cin, name);
    getline(cin, adress);
    getline(cin, phoneNumber);
    getline(cin, email);

    Customer s(id, name, adress, phoneNumber, email);

    cout << s.tostring() << endl;

}