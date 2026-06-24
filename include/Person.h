#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person {
protected:
    string id;
    string name;
    string phone;

public:
    Person(string id, string name, string phone);

    string getId() const;
    string getName() const;
    string getPhone() const;

    virtual ~Person() {}
};

#endif