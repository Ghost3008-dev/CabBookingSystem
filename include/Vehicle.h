#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using namespace std;

class Vehicle {
protected:
    string vehicleId;
    string model;

public:
    Vehicle(string vehicleId, string model);

    string getVehicleId() const;
    string getModel() const;

    virtual double calculateFare(double km) = 0;
    virtual string getType() const = 0;

    virtual ~Vehicle() {}
};

#endif