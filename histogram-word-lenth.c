#include <stdio.h>
#define IN 1
#define OUT 0
#define MAX 20
/* print a histogram of the word lengths of the input */
int main() {
  int len[MAX], i, STATE, wc, j, c;
  for(i = 0; i < MAX; i++) {
    len[i] = 0;
  }
  
  STATE = OUT;
  while((c = getchar()) != EOF) {
    if(c == ' ' || c == '\n' || c == '\t') {
      if(STATE == IN) {
        if(wc < MAX) { 
          ++len[wc];
        }
      }
      wc = 0;
      STATE = OUT;
    } else {
      STATE = IN;
      ++wc;
    }
  }

  printf("printing histogram of word lengths\n---------------------------------\n");
  for(i=0; i < MAX; i++) {
    printf("%2d: %d",i,len[i]);
    for(j = 0; j < len[i]; j++) {
      putchar('*');
    }
    putchar('\n');
  }
}

