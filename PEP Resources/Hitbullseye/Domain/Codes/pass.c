// for the question: Mark the best option:

// What is the output in the following program/f
#include <stdio.h>

int main()
{

 char c = -64;

 int i = -32;

 unsigned int u = -16;

 if (c > i)
 {

  printf("pass1,");

  if (c)
   printf("pass2");
  else
   printf("Fail2");
 }
 else

  printf("Fail1");

 if (i)
  printf("pass2");
 else
  printf("Fail2");

 return 0;
}

// O pass1, pass2

// Opass1, fail2

// fail1, pass2

// fail1, fail2