/*
 * File: ratio.c
 *
 * Description:
 *  This file calls the ratio() function written by students and prints the
 *  output to standard output.  The inputs are read from standard input so
 *  that shell scripts can repeatedly call student code with different inputs.
 */

#include <stdio.h>
#include <stdlib.h>

/* Function prototypes for student code */
extern signed long ratio (signed long, signed long, signed long);

int
main (int argc, char ** argv) {
  /* Values for the ratio test */
  signed long a, b, c, d;

  /*
   * Call the student's ratio() function and print its return value.
   */
  scanf ("%ld %ld %ld", &a, &b, &c);
  d = ratio (a, b, c);
  printf ("ratio: %ld/%ld = %ld/%ld\n", a, b, c, d); 
  fflush (stdout);
  return 0;
}
