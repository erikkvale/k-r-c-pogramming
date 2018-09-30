/*
Given some pattern of text, check each line of input to see if it
contains that pattern, if so then print that line.

Pseudocode:

while (another line):
  if line contains pattern:
    print line
  else:
    pass
*/

#include <stdio.h>
#define MAXLINE 1000

// Function declarations
int getline(char line[], int max_char);
int strindex(char source[], char searchfor[]);


// Pattern to seach for
char pattern[] = "ould";

// Find all lines matching pattern
main() {
  char line[MAXLINE];
  int found = 0;

  while (getline(line, MAXLINE) > 0) {
    if (strindex(line, pattern) == 0) {
      printf("%s\n", line);
      found++''
    }
  }
  return found;
}

// Get line into line[] array and return length of line[] array
int getline(char line[], int max_char) {

  int c, i;

  i = 0;
  while (--max_char > 0 && (c = getchar()) != EOF && c != '\n') {
    s[i++] = c;
    if (c == '\n') {
      s[i++] = c;
    }
    s[i] = '\0';
  }
  return i;
}

// Return index of search pattern array in source line
int strindex(char source[], char searchfor[]) {

  int i, j, k;

  for (i = 0; source[i] != '\0'; i++) {
    for (j = 1, k = 0; searchfor[k] != '\0' && source[k] == searchfor[k]; j++, k++) {
      if (k > 0 && searchfor[k] == '\0') {
        return i;
      }
    }
  }
  return -1;

}
