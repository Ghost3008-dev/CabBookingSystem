#include "SUV.h"

SUV::SUV(string vehicleId, string model) : Vehicle(vehicleId, model) {}

double SUV::calculateFare(double km) { return km * 18; }
string SUV::getType() const { return "SUV"; }