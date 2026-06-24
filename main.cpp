#include <iostream>
#include "include/Customer.h"
#include "include/Driver.h"
#include "include/Bike.h"
#include "include/Sedan.h"
#include "include/SUV.h"
#include "include/RideService.h"

using namespace std;

int main() {
    RideService service;
    vector<Ride*> activeRides;
    int choice;

    while (true) {
        cout << "\n===== Cab Booking System =====" << endl;
        cout << "1. Register Customer" << endl;
        cout << "2. Register Driver" << endl;
        cout << "3. Book Ride" << endl;
        cout << "4. Complete Ride" << endl;
        cout << "5. View All Customers" << endl;
        cout << "6. View All Drivers" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            string id, name, phone;
            cout << "Enter Customer ID: "; cin >> id;
            cout << "Enter Name: "; cin >> name;
            cout << "Enter Phone: "; cin >> phone;
            service.addCustomer(new Customer(id, name, phone));

        } else if (choice == 2) {
            string id, name, phone;
            int vehicleChoice;
            string vehicleId, model;
            cout << "Enter Driver ID: "; cin >> id;
            cout << "Enter Name: "; cin >> name;
            cout << "Enter Phone: "; cin >> phone;
            cout << "Select Vehicle Type (1. Bike  2. Sedan  3. SUV): ";
            cin >> vehicleChoice;
            cout << "Enter Vehicle ID: "; cin >> vehicleId;
            cout << "Enter Vehicle Model: "; cin >> model;

            Vehicle* v = nullptr;
            if (vehicleChoice == 1) v = new Bike(vehicleId, model);
            else if (vehicleChoice == 2) v = new Sedan(vehicleId, model);
            else v = new SUV(vehicleId, model);

            service.addDriver(new Driver(id, name, phone, v));

        } else if (choice == 3) {
            string customerId, pickup, destination;
            double distance;
            cout << "Enter Customer ID: "; cin >> customerId;
            cout << "Enter Pickup Location: "; cin >> pickup;
            cout << "Enter Destination: "; cin >> destination;
            cout << "Enter Distance (km): "; cin >> distance;

            Ride* ride = service.bookRide(customerId, pickup, destination, distance);
            if (ride) activeRides.push_back(ride);

        } else if (choice == 4) {
            if (activeRides.empty()) {
                cout << "No active rides." << endl;
            } else {
                activeRides.front()->completeRide();
                activeRides.erase(activeRides.begin());
            }

        } else if (choice == 5) {
            service.displayAllCustomers();

        } else if (choice == 6) {
            service.displayAllDrivers();

        } else if (choice == 7) {
            cout << "Goodbye!" << endl;
            break;
        } else {
            cout << "Invalid choice. Try again." << endl;
        }
    }

    return 0;
}