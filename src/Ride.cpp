#include "Ride.h"
#include <iostream>

Ride::Ride(string rideId, Customer* customer, Driver* driver,
           string pickup, string destination, double distance) {
    this->rideId = rideId;
    this->customer = customer;
    this->driver = driver;
    this->pickup = pickup;
    this->destination = destination;
    this->distance = distance;
}

void Ride::completeRide() {
    double fare = driver->getVehicle()->calculateFare(distance);

    cout << "\n===== Ride Summary =====" << endl;
    cout << "Ride ID: " << rideId << endl;
    cout << "Customer: " << customer->getName() << endl;
    cout << "Driver: " << driver->getName() << endl;
    cout << "Vehicle: " << driver->getVehicle()->getType() 
         << " (" << driver->getVehicle()->getModel() << ")" << endl;
    cout << "Pickup: " << pickup << endl;
    cout << "Destination: " << destination << endl;
    cout << "Distance: " << distance << " km" << endl;
    cout << "Fare: Rs. " << fare << endl;
    cout << "========================" << endl;

    driver->setAvailability(true);
    cout << "Driver " << driver->getName() << " is now available again." << endl;
}