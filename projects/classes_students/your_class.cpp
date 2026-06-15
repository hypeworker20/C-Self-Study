#include <iostream>
#include <string>
#include "your_class.hpp"
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