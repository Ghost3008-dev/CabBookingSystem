# Cab Booking System 🚕

A command-line based Cab Booking System built in C++ that simulates the core workflow of apps like Uber and Ola. This project demonstrates the five pillars of Object-Oriented Programming through a real-world application.

---

## OOP Concepts Demonstrated

| Concept | Where it appears |
|---|---|
| Abstraction | `Person` and `Vehicle` are abstract base classes |
| Inheritance | `Customer` and `Driver` extend `Person`; `Bike`, `Sedan`, `SUV` extend `Vehicle` |
| Polymorphism | `vehicle->calculateFare(km)` is dispatched at runtime based on vehicle type |
| Encapsulation | Private fields in all classes exposed only through getters and setters |
| Composition | `Driver` has-a `Vehicle`; `Ride` has-a `Customer` and `Driver` |

---

## Features

- Register customers and drivers
- Assign vehicles to drivers (Bike, Sedan, SUV)
- Book a ride by entering pickup location, destination and distance
- Auto-assign the first available driver
- Calculate fare based on vehicle type
- Complete a ride and free up the driver

---

## Fare Chart

| Vehicle | Rate |
|---|---|
| Bike | ₹8 / km |
| Sedan | ₹12 / km |
| SUV | ₹18 / km |

---

## Project Structure
CabBookingSystem/

├── include/
│   ├── Person.h
│   ├── Customer.h
│   ├── Driver.h
│   ├── Vehicle.h
│   ├── Bike.h
│   ├── Sedan.h
│   ├── SUV.h
│   ├── Ride.h
│   └── RideService.h
├── src/
│   ├── Person.cpp
│   ├── Customer.cpp
│   ├── Driver.cpp
│   ├── Vehicle.cpp
│   ├── Bike.cpp
│   ├── Sedan.cpp
│   ├── SUV.cpp
│   ├── Ride.cpp
│   └── RideService.cpp
├── main.cpp
├── .gitignore
└── README.md
---

## How to Run

**Step 1 — Clone the repository:**
git clone https://github.com/your-username/CabBookingSystem.git

cd CabBookingSystem

**Step 2 — Compile:**
g++ src/*.cpp main.cpp -I include -o cab

**Step 3 — Run:**
.\cab.exe        (Windows)

./cab            (Linux/Mac)

---

## Tech Stack

- Language: C++
- Paradigm: Object-Oriented Programming
- Tools: VS Code, g++ compiler, Git

---

## Author

Aryan