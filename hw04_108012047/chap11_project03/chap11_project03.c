///*****************************************************************/
///* Class: Computer Programming II, Fall 2019                     */
///* Author: Li-Wei Yeh (put your name here)                       */
///* ID: 108012047 (your student ID here)                          */
///* Date: 2019.09.22 (put program development started date here   */
///* Purpose: reduces a fraction									 */
///* Change History: log the change history of the program         */
///*****************************************************************/
//
//// reduce_fraction
//
//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//
//
//int find_gcd(int m, int n)
//{
//	while (n != 0) {
//		int remainder = m % n;
//		m = n;
//		n = remainder;
//	}
//
//	return m;
//}
//
//void reduce_fraction(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
//{
//	int gcd = find_gcd(numerator, denominator);
//
//	*reduced_numerator = numerator / gcd;
//	*reduced_denominator = denominator / gcd;
//}
//
//int main(void)
//{
//	printf("Hello world! \n");
//
//	int numerator, denominator;
//	int reduced_numerator, reduced_denominator;
//
//	printf("Enter a fraction : ");
//	scanf("%d/%d", &numerator, &denominator);
//
//	reduce_fraction(numerator, denominator, &reduced_numerator, &reduced_denominator);
//	printf("%d/%d becomes %d/%d", numerator, denominator, reduced_numerator, reduced_denominator);
//
//	return 0;
//}