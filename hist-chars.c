#include <stdio.h>
#define MAX 26
#define DIV 14

/* print histogram of chars used in input */
int main() {
  int chars[MAX], c, i, j;
  for(i = 0; i < MAX; i++) 
    chars[i] = 0;
  while((c = getchar()) != EOF) {
    // TODO lowercase all letters
    if (c >= 'A' && c <= 'Z') 
      c = c-'a';
    if (c >= 'a' && c <= 'z') {
      ++chars[c-'a'];
    }
  }
  for(i = 0; i < MAX; i++) {
    printf("%c:",i+'a');
    for (j = 0; j < chars[i]/DIV+1; j++) {
      putchar('*');
    }
    putchar('\n');
  }
}
  
