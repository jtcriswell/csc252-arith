/*
 * File: hyp.c
 *
 * Description:
 *  This file calls the findHyp() function written by students and prints the
 *  output to standard output.  The inputs are read from standard input so
 *  that shell scripts can repeatedly call student code with different inputs.
 */

#include <stdio.h>
#include <stdlib.h>

/* Function prototypes for student code */
extern unsigned long findHypSq (unsigned long, unsigned long);

int
main (int argc, char ** argv) {
  /* Values for finding a triangle's hypotenuse */
  unsigned long side1, side2, hypotenuse;

  /*
   * Call the student's findHypSq() function and print its return value.
   */
  scanf ("%ld %ld", &side1, &side2);
  hypotenuse = findHypSq (side1, side2);
  printf ("findHypSq: %ld %ld = %ld\n", side1, side2, hypotenuse); 
  fflush (stdout);
  return 0;
}
