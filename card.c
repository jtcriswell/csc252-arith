/*
 * File: card.c
 *
 * Description:
 *  This file calls the changeCard() function written by students and prints
 *  the output to standard output.  The inputs are read from standard input so
 *  that shell scripts can repeatedly call student code with different inputs.
 */

#include <stdio.h>
#include <stdlib.h>

/* Function prototypes for student code */
extern unsigned long changeCard (unsigned long);

/* Constant values for cards */
static const unsigned char hearts = 0;
static const unsigned char diamonds = 1;
static const unsigned char clubs = 2;
static const unsigned char spades = 3;

int
main (int argc, char ** argv) {
  /* List of cards */
  unsigned long cardList = 0;
  unsigned long newCardList = 0;

  /* Index variable */
  unsigned int index;

  /*
   * Call the student's changeCard() function and print its return value.
   */
  scanf ("%lx", &cardList);
  newCardList = changeCard (cardList);
  printf ("changeCard: %lx -> %lx\n", cardList, newCardList); 
  fflush (stdout);
  return 0;
}
