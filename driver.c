/*
 * File: driver.c
 *
 * Description:
 *  This file calls the functions written by students and prints the output
 *  to standard output.  The inputs are read from standard input so that shell
 *  scripts can repeatedly call student code with different inputs.
 */

#include <stdio.h>
#include <stdlib.h>

/* Function prototypes for student code */
extern unsigned findHypSq (unsigned, unsigned);
extern signed ratio (signed, signed, signed);
extern unsigned changeCard (unsigned);

int
main (int argc, char ** argv) {
  /* Values for finding a triangle's hypotenuse */
  unsigned side1, side2, hypotenuse;

  /* Values for the ratio test */
  signed a, b, c, d;

  /*
   * Call the student's findHypSq() function and print its return value.
   */
  scanf ("%d %d\n", &side1, &side2);
  hypotenuse = findHypSq (side1, side2);
  printf ("findHypSq: %ld %ld = %ld\n", side1, side2, hypotenuse); 
  fflush (stdout);

  /*
   * Call the student's ratio() function and print its return value.
   */
  scanf ("%d %d %d\n", &a, &b, &c);
  d = ratio (a, b, c);
  printf ("ratio: %ld/%ld = %ld/%ld\n", a, b, c, d); 
  fflush (stdout);

  /*
   * Call the student's changeCard() function and print its return value.
   */
  return 0;
}
