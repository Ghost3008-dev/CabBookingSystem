#ifndef SUV_H
#define SUV_H

#include "Vehicle.h"

class SUV : public Vehicle {
public:
    SUV(string vehicleId, string model);

    double calculateFare(double km) override;
    string getType() const override;
};

#endif