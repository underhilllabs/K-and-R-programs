#include <stdio.h>

int main() {
  int digits[10], nother, ns, c, i;
  i = nother = ns = c = 0;
  for(i = 0; i < 10; i++) 
    digits[i] = 0;
  while((c = getchar()) != EOF) {
    if(c >= '0' && c <= '9') {
      ++digits[c - '0'];
    } else if (c == ' ' || c == '\n' || c == '\t') {
      ++ns;
    } else { 
      ++nother;
    }
  }
  for(i = 0; i < 10; i++) {
    printf("%d => %d\n",i, digits[i]);
  }
  printf("whitespace: %d\nother: %d\n",ns,nother);
}
        
