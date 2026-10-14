//structure is similar to object

#include <stdio.h>

int main(void) {
  struct Person {
    char firstName[25]; // fix character length to 25
    // Write your code below
    char lastName[40];
    int age;
  }; // rmb semicolon
  
  // Write your code below
  struct Person person1 = {"Ada", "Lovelace", 28};
  struct Person person2 = {"Marie", "Curie", 44};
  // struct name_of_structure var_name = {first member, second member, third member}
  printf("%s %s's age is %d", person1.firstName, person1.lastName, person1.age); 
  person1.age = 24;
  printf("\nNow it is %d", person1.age);

}