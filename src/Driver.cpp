#include "Driver.h"
#include <iostream>

Driver::Driver(string id, string name, string phone, Vehicle* vehicle)
    : Person(id, name, phone) {
    this->vehicle = vehicle;
    this->isAvailable = true;
}

bool Driver::getAvailability() const { return isAvailable; }
void Driver::setAvailability(bool status) { isAvailable = status; }
Vehicle* Driver::getVehicle() const { return vehicle; }

void Driver::displayInfo() const {
    cout << "Driver ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Phone: " << phone << endl;
    cout << "Vehicle: " << vehicle->getType() << " (" << vehicle->getModel() << ")" << endl;
    cout << "Available: " << (isAvailable ? "Yes" : "No") << endl;
}