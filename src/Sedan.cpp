#include "Sedan.h"

Sedan::Sedan(string vehicleId, string model) : Vehicle(vehicleId, model) {}

double Sedan::calculateFare(double km) { return km * 12; }
string Sedan::getType() const { return "Sedan"; }