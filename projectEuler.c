#include <stdio.h>

/* * * * * * * * * * * * *
  Raymond Wu
  Systems pd10
  HW00 -- Project Euler
  2018-09-07
* * * * * * * * * * * * */


/* Problem 01 */
int problem01() {
  int sum = 0;
  
  int i;
  for (i=0 ; i<1000 ; i++) {
    if (i%3==0 || i%5==0)
      sum += i;
  } /* end for loop */

  return sum;
} /* end problem01 */


/* Problem 05 */
int problem05() {
  int retInt = 1;
  int found = 0;

  while (found == 0) { // while num not found

    int i;
    for (i=1 ; i<= 20 ; i++) {
      if (retInt % i != 0) {
	retInt++;
	break;
      }
      if (i == 20) {
	found = 1;
      }
    } /* end for loop */

  } /* end while loop */

  return retInt;
} /* end problem05 */


/* Problem 06 */
int problem06() {
  int sum = 0;
  int sumOfSquares = 0;
  
  int i;
  for (i=1 ; i<=100 ; i++) {
    sum += i;
    sumOfSquares += i * i;
  } /* end for loop */

  return sum * sum - sumOfSquares;
} /* end problem06 */


/* Problem 02 */
int problem02() {

  /* 1, 2, 3, 5, ... */
  int sum = 0;
  int p = 1;
  int q = 2;

  while (q <= 4000000) {
    if (q % 2 == 0)
      sum += q;
    int temp = p;
    p = q;
    q += temp;
  }

  return sum;
  
} /* end problem02 */


/* Problem 09 */
int problem09() {

  int c = 997;
  int b = 2;
  int a = 1;

  for ( ; a < 997 ; a++ ) {
    for ( b=a+1; b < 997 ; b++ ) {

      c = 1000-a-b;
      if (a*a+b*b==c*c) {
	return a*b*c;
      } /* end if */
      
    } /* end b for-loop */
  } /* end a for-loop */

  return -1;
} /* end problem09 */


int main() {
  printf("Problem 01: %d\n", problem01());
  printf("Problem 05: %d\n", problem05());
  printf("Problem 06: %d\n", problem06());
  printf("Problem 02: %d\n", problem02());
  printf("Problem 09: %d\n", problem09());
  return 0;
}


/* * * * * OUTPUT * * * * *  
Problem 01: 233168
Problem 05: 232792560
Problem 06: 25164150
Problem 02: 4613732
Problem 09: 31875000
* * * * * * * * * * * * * */
