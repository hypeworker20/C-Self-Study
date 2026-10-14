#include<stdio.h>

int main() {
  // Checkpoint 1 code goes here.
  double dblVar = 1;

  // Checkpoint 2 code goes here.
  double* dblPtr = &dblVar;

  // Checkpoint 3 code goes here.
  printf("%p\n", dblPtr); // %p is for pointer memory address

  printf("%lf\n", *dblPtr);
  *dblPtr += 1;
  printf("%lf", *dblPtr);
}
// referencing is when you use &<varname> so pointer knows its mem address
// dereferncing is when you use *<pointer varname> to modify the value of variable stored in the mem address