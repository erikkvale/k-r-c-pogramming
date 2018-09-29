#include <stdio.h>

// Copy input to output; 1st version
main() {
  int c, new_line;

  new_line = 0;
  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      ++new_line;
    }
  }
  printf("%d\n", new_line);

}
