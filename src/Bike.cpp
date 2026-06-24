#include "Bike.h"

Bike::Bike(string vehicleId, string model) : Vehicle(vehicleId, model) {}

double Bike::calculateFare(double km) { return km * 8; }
string Bike::getType() const { return "Bike"; }