int main() {
   Vehicle* myVehicle = new Bike(); // Pointer to base class, actually points to a Bike
 
   // Checking the type using typeid
   if (typeid(*myVehicle) == typeid(Car)) {
       std::cout << "It's a Car!" << std::endl;
   }
   else if (typeid(*myVehicle) == typeid(Bike)) {
       std::cout << "It's a Bike!" << std::endl;
   }
   else {
       std::cout << "Unknown vehicle type!" << std::endl;
   }
 
   delete myVehicle; // Clean up
 
   return 0;
}