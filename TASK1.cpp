#include <iostream>
 
class Vehicle {
public:
   virtual void openTrunk() = 0; // Pure virtual function
   virtual ~Vehicle() {} // Virtual destructor
};
 
class Car : public Vehicle {
public:
   void openTrunk() override {
       std::cout << "Opening car trunk." << std::endl;
   }
};
 
class Bike : public Vehicle {
public:
   void openTrunk() override {
       std::cout << "Bikes don't have trunks!" << std::endl;
   }
};
 
int main() {
   Vehicle* myBike = new Bike(); // Creates Bike object, stored as Vehicle*
 
   Car* p = dynamic_cast<Car*>(myBike); // Attempting to cast Bike* to Car*
   if (p) {
       std::cout << "Cast successful!" << std::endl;
       p->openTrunk(); // Should not execute
   } else {
       std::cout << "Cast unsuccessful, type mismatch!" << std::endl; // Expected output
   }
 
   Vehicle* myCar = new Car(); // Creates Car object, stored as Vehicle*
   Car* p1 = dynamic_cast<Car*>(myCar); // Correct types, myCar is actually a Car*
   if (p1) {
       std::cout << "Cast successful!" << std::endl;
       p1->openTrunk(); // Should execute and open the trunk
   } else {
       std::cout << "Cast unsuccessful, type mismatch!" << std::endl; // Not expected output
   }
   return 0;
}