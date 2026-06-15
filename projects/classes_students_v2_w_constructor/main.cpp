#include <iostream>
#include <string>

// include your header file here:
#include "your_class.hpp"

int main() {
  Student john("John",1000,3.9);
  std::cout << john.get_name() << " ";
  std::cout << john.get_id() << " ";
  std::cout << john.get_gpa() << std::endl;
  john.set_gpa(4.0);
  std::cout << "GPA is now: " << john.get_gpa() << std::endl;
}