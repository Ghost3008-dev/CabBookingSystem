#include "Vehicle.h"

Vehicle::Vehicle(string vehicleId, string model) {
    this->vehicleId = vehicleId;
    this->model = model;
}

string Vehicle::getVehicleId() const { return vehicleId; }
string Vehicle::getModel() const { return model; }