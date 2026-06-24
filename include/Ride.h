#ifndef RIDE_H
#define RIDE_H

#include "Customer.h"
#include "Driver.h"

class Ride {
private:
    string rideId;
    Customer* customer;
    Driver* driver;
    string pickup;
    string destination;
    double distance;

public:
    Ride(string rideId, Customer* customer, Driver* driver, 
         string pickup, string destination, double distance);

    void completeRide();
};

#endif