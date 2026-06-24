#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Person.h"

class Customer : public Person {
public:
    Customer(string id, string name, string phone);

    void displayInfo() const;
};

#endif