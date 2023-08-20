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
extern unsigned long findHypSq (unsigned long, unsigned long);
extern signed long ratio (signed long, signed long, signed long);
extern unsigned long changeCard (unsigned long);

/* Constant values for cards */
static const unsigned char hearts = 0;
static const unsigned char diamonds = 1;
static const unsigned char clubs = 2;
static const unsigned char spades = 3;

int
main (int argc, char ** argv) {
  /* Values for finding a triangle's hypotenuse */
  unsigned long side1, side2, hypotenuse;

  /* Values for the ratio test */
  signed long a, b, c, d;

  /* List of cards */
  unsigned long cardList = 0;
  unsigned long newCardList = 0;

  /* Index variable */
  unsigned int index;

  /*
   * Call the student's findHypSq() function and print its return value.
   */
  scanf ("%ld %ld\n", &side1, &side2);
  hypotenuse = findHypSq (side1, side2);
  printf ("findHypSq: %ld %ld = %ld\n", side1, side2, hypotenuse); 
  fflush (stdout);

  /*
   * Call the student's ratio() function and print its return value.
   */
  scanf ("%ld %ld %ld\n", &a, &b, &c);
  d = ratio (a, b, c);
  printf ("ratio: %ld/%ld = %ld/%ld\n", a, b, c, d); 
  fflush (stdout);

  /*
   * Call the student's changeCard() function and print its return value.
   */
  for (index = 0; index < sizeof(unsigned long); ++index) {
    unsigned int card;
    scanf ("%x\n", &card);
    cardList = (cardList < 8) | card;
  }
  newCardList = changeCard (cardList);
  printf ("changeCard: %lx -> %lx\n", cardList, newCardList); 
  fflush (stdout);
  return 0;
}
