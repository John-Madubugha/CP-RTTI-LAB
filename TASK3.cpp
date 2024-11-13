#include <iostream>
 
class TShirt {
public:
   void wear() {
       std::cout << "Wearing the T-shirt." << std::endl;
   }
};
 
class Jeans {
public:
   void fold() {
       std::cout << "Folding the jeans." << std::endl;
   }
};
 
int main() {
   TShirt myShirt; // An instance of TShirt
 
   Jeans* jeansPtr = reinterpret_cast<Jeans*>(&myShirt); // Unsafe cast: TShirt* to Jeans*
 
   std::cout << "Interpreting a TShirt object as a Jeans object." << std::endl;
   jeansPtr->fold(); // Undefined behavior: myShirt is not actually Jeans
 
   return 0;
}
