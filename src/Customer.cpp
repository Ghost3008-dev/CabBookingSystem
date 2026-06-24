#include "Customer.h"
#include <iostream>

Customer::Customer(string id, string name, string phone) 
    : Person(id, name, phone) {}

void Customer::displayInfo() const {
    cout << "Customer ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Phone: " << phone << endl;
}