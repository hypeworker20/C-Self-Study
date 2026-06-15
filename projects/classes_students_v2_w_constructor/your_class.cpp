#include <iostream>
#include <string>
#include "your_class.hpp"
  Student::Student(std::string new_name, int new_id, double new_gpa){
    name = new_name;
    id = new_id;
    gpa = new_gpa;
  }
  std::string Student::get_name(){
    return name;
  }
  void Student::set_name(std::string new_name){
    name = new_name;
  }
  int Student::get_id(){
    return id;
  }
  void Student::set_id(int new_id){
    id = new_id;
  }
  double Student::get_gpa(){
    return gpa;
  }
  void Student::set_gpa(double new_gpa){
    gpa = new_gpa;
  }
  Student::~Student(){
  }