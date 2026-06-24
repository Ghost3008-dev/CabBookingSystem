#ifndef SEDAN_H
#define SEDAN_H

#include "Vehicle.h"

class Sedan : public Vehicle {
public:
    Sedan(string vehicleId, string model);

    double calculateFare(double km) override;
    string getType() const override;
};

#endif