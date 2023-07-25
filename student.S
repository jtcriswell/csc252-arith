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
 *  %rdi - Length of the first side of the right triangle.
 *  %rsi - Length of the second side of the right triangle.
 *
 * Return value:
 *  %rax - The square of the length of the hypotenuse.
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

.global ratio
.type ratio, @function
ratio:
  /*
   * Insert your commented code here.
   */
  retq

.global changeCard
.type changeCard, @function
changeCard:
  /*
   * Insert your commented code here.
   */
  retq
