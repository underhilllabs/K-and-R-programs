#include <stdio.h>
#define UPPER 150   /* upper limit of table */
#define LOWER 0     /* lower limit of table */
#define STEP 10     /* step amount */

int cels2fahr(int c);

int main(char* argv[]) {
  int cels;
  printf("  Celcius  ->  Fahrenheit\n");
  printf("-------------------------\n");
  for (cels = LOWER; cels <= UPPER; cels+=STEP) {
    printf("\t%3d \t%6d\n",cels,cels2fahr(cels));
  }
}

int cels2fahr(int c) {
  return (9*c)/5+32;
}
