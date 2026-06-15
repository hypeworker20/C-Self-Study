#include <iostream>
#include <string>
class Student{
  public:
  Student(std::string new_name, int new_id, double new_gpa);
  ~Student();
  std::string get_name();
  void set_name(std::string new_name);
  int get_id();
  void set_id(int new_id);
  double get_gpa();
  void set_gpa(double new_gpa);
  private:
  std::string name;
  int id;
  double gpa;
};