#ifndef BIKE_H
#define BIKE_H

#include "Vehicle.h"

class Bike : public Vehicle {
public:
    Bike(string vehicleId, string model);

    double calculateFare(double km) override;
    string getType() const override;
};

#endif