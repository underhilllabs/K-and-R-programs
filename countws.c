#include <stdio.h>
int main() {
  int tabs = 0, blanks = 0, spaces = 0, nl = 0;
  int lastnl = 0;
  int c;
  while((c = getchar()) != EOF) {
    if (c == '\t') 
      ++tabs;
    if (c == ' ')
      ++spaces;
    if (c == '\n') {
      ++nl;
      // c is \n and lastnl is set, this is a blank line
      if (lastnl == 1) {
        ++blanks;
      }
      lastnl = 1;
    } else {
      lastnl = 0;
    }
  }
  printf("Number of lines: %d, tabs: %d, blank lines: %d, spaces: %d\n", nl, tabs, blanks, spaces);
}

 
