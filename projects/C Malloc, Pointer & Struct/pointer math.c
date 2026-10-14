#include<stdio.h>

int main() {
  double* ptr1;
  printf("%p\n", ptr1); 
  // Code for Checkpoint 1 goes here:
  ptr1 += 5;
  printf("%p\n", ptr1); 
  // Code for Checkpoint 2 goes here: 
  ptr1 -= 4;
  printf("%p\n", ptr1); 
}

// pointer mem address can only + or - with other intergers, not with other points
// +1 means move the pointer by 1 x size of data type in byte, so an int which is 4 bytes means you move the pointer to another mem address 4 bytes away to a higher number memory address (e.g. 0x00 to 0x04)