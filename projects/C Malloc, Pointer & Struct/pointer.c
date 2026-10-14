#include <stdio.h>

// Write your code below
void incrementAge(int* ageP){
  *ageP = *ageP + 1;
}

int main(void) {
  int age = 100;
  incrementAge(&age);
  printf("%d", age);
}


// &varname return varname's memory address, subsequently used for the pointers defined by *, which points to the memory address of variable for modification