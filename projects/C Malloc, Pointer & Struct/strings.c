#include<stdio.h>

/*
int main() {
  // Checkpoint 1 code goes here
  char comp[] = {'C','o','m','p','u','t','e','r','\0'};
  
  // Checkpoint 2 code goes here
  char compCode[] = "Computer Code";
  // Checkpoint 3 code goes here      
  printf("%s\n%s", comp, compCode);
}
*/

/*
#include <stdio.h>

int main() {
  char p[] = "procezzor";
  // Checkpoint 1 code goes here
  printf("%c\n", p[2]);
  // Checkpoint 2 code goes here
  // method 1
  for (int i = 0; i < sizeof(p); i++){
    if (p[i] == 'z'){
      p[i] = 's';
    }
  }
  // method 2
  p[5] = 's';
  p[6] = 's';
  printf("%s", p);
}
*/

/*
#include<stdio.h>
#include<string.h>

int main() {
  char s[] = "When the zombies arrive, quickly fax Judge Pat Alphabet";
  char p[] = "poolloop";  
  // Checkpoint 1 code goes here
  for (int i = 0; i < strlen(s); i++){
    s[i] = '*';
  }
  printf("%s\n", s);
  // Checkpoint 2 code goes here
  for (int i = 0; i < strlen(p)/2; i++){
    p[i] = '#';
  }
  printf("%s", p);
}
*/

/*
strcat(originalvar,appendedvar)
end would be:
originalvarappendarvar


#include<stdio.h>
#include<string.h>

int main() {
    
  char s1[14] = "London";
  char s2[] = " Bridge";

  char n[20] = "New";
  char y[] = " York";
  char c[] = " City";

  // Code for checkpoint 1 goes here
  strcat(s1,s2);
  printf("%s\n", s1);
  
  // Code for checkpoint 2 goes here
  strcat(n,y);
  strcat(n,c);
  printf("%s\n", n);

}
*/

/*
strcpy(dst,src)
len of dst must be more than src to accomodate src being copied over
must account for one + length of string for the null character
#include<stdio.h>
#include<string.h>

int main() {
  
  char src[] = "banana";
  char dst[7];
  
  char pan[] = "How vexingly quick daft zebras jump!";
  int len = 0; // Checkpoint 2
  len = strlen(pan) + 1;
  char dst2[len];
  
  // Code for checkpoint 1 goes here
  strcpy(dst,src);
  printf("%s\n", dst);  
  
  // Code for checkpoint 3 goes here
  strcpy(dst2,pan);
  printf("%s", dst2);

}

*/