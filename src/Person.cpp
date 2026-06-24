#include "Person.h"

Person::Person(string id, string name, string phone) {
    this->id = id;
    this->name = name;
    this->phone = phone;
}

string Person::getId() const { return id; }
string Person::getName() const { return name; }
string Person::getPhone() const { return phone; }