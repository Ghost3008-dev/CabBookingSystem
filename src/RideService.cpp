#include "RideService.h"
#include <iostream>

RideService::RideService() {
    rideCounter = 1;
}

void RideService::addCustomer(Customer* customer) {
    customers.push_back(customer);
    cout << "Customer " << customer->getName() << " registered successfully." << endl;
}

void RideService::addDriver(Driver* driver) {
    drivers.push_back(driver);
    cout << "Driver " << driver->getName() << " registered successfully." << endl;
}

Ride* RideService::bookRide(string customerId, string pickup,
                             string destination, double distance) {
    Customer* foundCustomer = nullptr;
    for (Customer* c : customers) {
        if (c->getId() == customerId) {
            foundCustomer = c;
            break;
        }
    }

    if (!foundCustomer) {
        cout << "Customer not found." << endl;
        return nullptr;
    }

    Driver* availableDriver = nullptr;
    for (Driver* d : drivers) {
        if (d->getAvailability()) {
            availableDriver = d;
            break;
        }
    }

    if (!availableDriver) {
        cout << "No drivers available right now." << endl;
        return nullptr;
    }

    availableDriver->setAvailability(false);
    string rideId = "R" + to_string(rideCounter++);
    Ride* ride = new Ride(rideId, foundCustomer, availableDriver,
                          pickup, destination, distance);

    cout << "Ride booked! Driver " << availableDriver->getName() 
         << " assigned." << endl;
    return ride;
}

void RideService::displayAllDrivers() const {
    cout << "\n===== All Drivers =====" << endl;
    for (Driver* d : drivers) {
        d->displayInfo();
        cout << "----------------------" << endl;
    }
}

void RideService::displayAllCustomers() const {
    cout << "\n===== All Customers =====" << endl;
    for (Customer* c : customers) {
        c->displayInfo();
        cout << "----------------------" << endl;
    }
}