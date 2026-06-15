#include <iostream>
#include <string>
class Student{
  public:
  std::string get_name();
  void set_name(std::string new_name);
  int get_id();
  void set_id(int new_id);
  private:
  std::string name;
  int id;
};