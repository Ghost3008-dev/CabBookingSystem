#ifndef RIDESERVICE_H
#define RIDESERVICE_H

#include "Ride.h"
#include <vector>

class RideService {
private:
    vector<Customer*> customers;
    vector<Driver*> drivers;
    int rideCounter;

public:
    RideService();

    void addCustomer(Customer* customer);
    void addDriver(Driver* driver);

    Ride* bookRide(string customerId, string pickup, 
                   string destination, double distance);

    void displayAllDrivers() const;
    void displayAllCustomers() const;
};

#endif