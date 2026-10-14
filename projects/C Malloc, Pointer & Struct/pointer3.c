#include<stdio.h>
#include<string.h>

void print_notes();

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  char s[] = "Farmer Jack realized that big yellow quilts were expensive!!";
  
  

  // Code for Checkpoint 1 goes here.
  int* ptr = &arr[9];
  // Code for Checkpoint 2 goes here.
  for (int i = 9; i != -1; i--){
    int* ptr = &arr[i];
    printf("%d\n", *ptr);
  }
  // Code for Checkpoint 3 goes here.
  char* ptr2 = &s[0];
  // Code for Checkpoint 4 goes here.
  for(int i = 0; i < strlen(s); i++){
    char* ptr2 = &s[i];
    *ptr2 = '#'; // A CHARACTER ARRAY (e.g. s[], char* type) IS DEFINED IN DOUBLE QUOTES WHILE A SINGLE STRING IS DEFINED WITH SINGLE QUOTE (char type)
  }
  printf("%d is the size of bytes occupied in memory by variable char array s\n", sizeof(s)); // size in bytes a variable occupy in memory
  printf("%s\n", s); 
  print_notes(); 
}
void print_notes(){
  printf("Type\t|\tDescription\t|\tValues\n");
  printf("int\t|\ta whole number\t|\t-2,147,483,648 to 2,147,483,647\n");
  printf("float\t|\ta number with possible decimals\t|\t6 decimal places\n");
  printf("double\t|\ta number with possible decimals\t|\t15 decimal places\n");
  printf("char\t|\tstores one character (letter or number)\t|\ta single character\n");
  printf("\n\n\n\n");
}
/*
Type	Description	Values
int	a whole number	-2,147,483,648 to 2,147,483,647
float	a number with possible decimals	6 decimal places
double	a number with possible decimals	15 decimal places
char	stores one character (letter or number)	a single character
*/
/*
symbol	type
%d or %i	int
%f	double or float
%c	char
*/

// const double SPEEDOFLIGHT = 1.86; const means you can only defined the variable in that line and only once