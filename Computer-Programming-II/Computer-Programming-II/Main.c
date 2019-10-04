/*****************************************************************/
/* Class: Computer Programming II, Fall 2019                     */
/* Author: Li-Wei Yeh (put your name here)                       */
/* ID: 108012047 (your student ID here)                          */
/* Date: 2019.09.22 (put program development started date here   */
/* Purpose: reduces a fraction									 */
/* Change History: 2019.10.04 added obligatory comments			 */
/*****************************************************************/

// reduce_fraction

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


// function to find the greatest common divisor
int find_gcd(int m, int n)
{
	// if the remainder is not zero
	while (n != 0) {
		// find the remainder of the division of m divided by n
		int remainder = m % n;
		// set m to n
		m = n;
		// let n become the remainder
		n = remainder;
	}

	// returns the greatest common divisor
	return m;
}

// function to reduce the fraction
void reduce_fraction(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
	// find the greatest common divisor
	int gcd = find_gcd(numerator, denominator);

	// reduce the numerator
	*reduced_numerator = numerator / gcd;
	// reduce the denominator
	*reduced_denominator = denominator / gcd;
}

int main(void)
{
	printf("Fraction reducing program...\n");

	int numerator, denominator;
	int reduced_numerator, reduced_denominator;

	// asks the user to enter a fraction
	printf("Enter a fraction : ");
	// sets the numerator and denominator to the entered value
	scanf("%d/%d", &numerator, &denominator);

	// reduces the entered numerator and denominator
	reduce_fraction(numerator, denominator, &reduced_numerator, &reduced_denominator);
	// prints the new value
	printf("%d/%d becomes %d/%d", numerator, denominator, reduced_numerator, reduced_denominator);

	return 0;
}