#include <iostream>

int main() {
  int year;
  bool divide_by_4 = false;
  bool divide_by_100 = false;
  bool divide_by_400 = false;
  std::cout << "Kindly enter a year: \n";
  std::cin >> year;
  if (year % 4 == 0){
    divide_by_4 = true;
  }
  if (year % 100 == 0){
    divide_by_100 = true;
  }
  if (year % 400 == 0){
    divide_by_400 = true;
  }
  if ((divide_by_4 && !divide_by_100) || (divide_by_100 && divide_by_400)){
    std::cout << "This is a leap year.\n";
  }
  else{
    std::cout << "This is not a leap year.\n";
  }
}