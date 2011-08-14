#include <stdio.h>
#define MAXLINE 1000

int getln(char s[], int maxline);
void mycopy(char t[], char f[]);
void reverse_str(char out[], char in[], int len);

int main() {
  int len;
  int max; 
  char line[MAXLINE];
  char rev[MAXLINE];
  
  max = 0;

  while((len = getln(line, MAXLINE)) > 0) {
    reverse_str(rev, line, len);
    printf("%s",rev);
  }
  return 0;
}



int getln(char s[], int lim) {
  int c, i; 
  for(i = 0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

void reverse_str(char out[], char s[], int len) {
  int i, j;
  j = 0;
  for(i = len-2; i >= 0; --i) {
    out[j] = s[i];
    j++;
  }
  out[j++] = '\n';
  out[j] = '\0';
}
