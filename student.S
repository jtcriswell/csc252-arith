##############################################################################
#
# File: student.S
#
# Description:
#   This file contains skeleton source code that students should complete so
#   that it performs the computations required in the Machine Problem handout.
#
##############################################################################

.text

/*
 * Function: findHypSq
 *
 * Description:
 *  Given the two sides of a right triangle, compute the square of the
 *  hypotenuse.
 *
 * Inputs:
 *  %rdi - Integer length of the first side of the right triangle.
 *  %rsi - Integer length of the second side of the right triangle.
 *
 * Return value:
 *  %rax - The square of the length of the hypotenuse as an integer.
 *
 * Notes:
 *  This function does not check for integer overflow.  Therefore, the return
 *  value may be less than either input.
 */
.global findHypSq
.type findHypSq, @function
findHypSq:
  /*
   * Insert your commented code here.
   */
  retq

/*
 * Function: ratio
 *
 * Description:
 *  Given integers a, b, and c in the ratio a/b = c/d, compute the value of
 *  the integer d.
 *
 * Inputs:
 *  %rdi - The value of a.
 *  %rsi - The value of b.
 *  %rdx - The value of c.
 *
 * Return value:
 *  %rax - <WRITE DESCRIPTION OF RETURN VALUE HERE>
 *
 * Notes:
 *  This function does not check for integer overflow or underflow.  Therefore,
 *  the return value may be incorrect.
 */
.global ratio
.type ratio, @function
ratio:
  /*
   * Insert your commented code here.
   */
  retq

/*
 * Function: changeCard
 *
 * Description:
 *  WRITE DESCRIPTION OF WHAT FUNCTION DOES HERE.
 *
 * Inputs:
 *  %rdi - A 64-bit integer representing a set of eight cards.  Each byte
 *         represents one card: the first nibble represent the suite, and the
 *         second nibble represents the value of the card.
 *
 * Return value:
 *  %rax - The set of eight cards in which the suite and card value of each
 *         card is incremented.
 */
.global changeCard
.type changeCard, @function
changeCard:
  /*
   * Insert your commented code here.
   */
  retq
