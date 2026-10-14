/* vulnerable

#include <stdio.h>
#include <string.h>

void vulnerableFunction(char *str) {
  char buffer[10];
  strcpy(buffer, str);
  printf("Buffer content: %s\n", buffer);
}

int main() {
  char input[50];
  printf("Enter a string: ");
  scanf("%s", input);
  vulnerableFunction(input);
  return 0;
}

*/

/* patched and mitigated

#include <stdio.h>
#include <string.h>

void vulnerableFunction(char *str) {
  char buffer[10];
  strncpy(buffer, str, sizeof(buffer) - 1); // strncopy(dest,src,limitnumofstr)
  buffer[sizeof(buffer)-1]='\0';
  printf("Buffer content: %s\n", buffer);
}

int main() {
  char input[50];
  printf("Enter a string: ");
  scanf("%10s", input); // "%s just validates input as string. %10s enforces only 10 string at most able to be inputted"
  vulnerableFunction(input);
  return 0;
}

*/