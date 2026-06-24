#ifndef DRIVER_H
#define DRIVER_H

#include "Person.h"
#include "Vehicle.h"

class Driver : public Person {
private:
    bool isAvailable;
    Vehicle* vehicle;

public:
    Driver(string id, string name, string phone, Vehicle* vehicle);

    bool getAvailability() const;
    void setAvailability(bool status);
    Vehicle* getVehicle() const;

    void displayInfo() const;
};

#endif