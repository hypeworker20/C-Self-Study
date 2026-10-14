#include <stdio.h>
#include <stdlib.h>
int main() {
  // Allocate memory for a number of items
  int numItems = 15;
  int * myArray = malloc(numItems * sizeof(int));
  // address of the array in memory
  printf("%p\n", myArray);
  // Display the contents of the memory
  for(int i = 0; i < numItems; i++) {
    printf("%d ", myArray[i]);
  }

  // Free the memory
  free(myArray);
  myArray = NULL;
  return 0;
}