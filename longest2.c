#include <stdio.h>
#define MAXLINE 50

int getln(char s[], int maxline);
void mycopy(char t[], char f[]);

int main() {
  int len;
  int max; 
  char line[MAXLINE];
  char longest[MAXLINE];
  max = 0;

  while((len = getln(line, MAXLINE)) > 0) {
    if(len > max) {
      mycopy(longest, line);
      max = len;
    }
  }
  if (max > 0) {
    printf("Longest line has length: %d\n",max);
    printf("%s\n",longest);
  }
  return 0;
}



int getln(char s[], int lim) {
  int c, i, len;
  i = 0;
  for(len = 0; (c=getchar()) != EOF && c != '\n'; ++len) {
    if(i < lim-1) {
      s[i] = c;
      ++i;
    }
  }
  if (c == '\n' && len < lim-1) {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return len;
}

void mycopy(char to[], char from[]) {
  int i;
  i = 0;
  while((to[i] = from[i]) != '\0')
    i++;
}
