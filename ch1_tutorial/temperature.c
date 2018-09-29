#include <stdio.h>

// Print a table of temperatures,
// <fahrenheit> -- <celsius>
// for fahrenheith = 0, 20, ..., 300

#define LOWER 0     // Lower limit of table
#define UPPER 300   // Upper limit of table
#define STEP 20     // Step size


int while_conversion() {

  float fahr, cels;

  // Table header
  printf("|Fahrenheit| \t |Celsius|\n");

  fahr = LOWER;
  while (fahr <= UPPER) {
    cels = (5.0/9.0) * (fahr - 32.0);
    printf("%3.0f\t\t%6.1f\n", fahr, cels);
    fahr = fahr + STEP;
  }
  return 0;
}

int for_conversion() {

  float fahr, cels;

  // Table header
  printf("|Fahrenheit| \t |Celsius|\n");

  for (fahr = LOWER, fahr <= UPPER; fahr = fahr + STEP;) {
    printf("%3f %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
  }

}

main() {
  while_conversion();
  for_conversion();
}
