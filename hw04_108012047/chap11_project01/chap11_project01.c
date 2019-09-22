///*****************************************************************/
///* Class: Computer Programming II, Fall 2019                     */
///* Author: Li-Wei Yeh (put your name here)                       */
///* ID: 108012047 (your student ID here)                          */
///* Date: 2019.09.22 (put program development started date here   */
///* Purpose: counts the amount of bills needed					 */
///* Change History: log the change history of the program         */
///*****************************************************************/
//
//// dollar change
//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//
//void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
//{
//	*twenties = dollars / 20;
//	dollars -= (*twenties * 20);
//
//	*tens = dollars / 10;
//	dollars -= (*tens * 10);
//
//	*fives = dollars / 5;
//	dollars -= (*fives * 5);
//
//	*ones = dollars / 1;
//}
//
//int main(void)
//{
//	printf("Hello world!");
//
//	int amount, twenties, tens, fives, ones;
//
//	// asks the user to enter a dollar amount
//	printf("Enter a dollar amount...");
//	scanf("%d", &amount);
//
//	pay_amount(amount, &twenties, &tens, &fives, &ones);
//
//	// new line for formatting
//	printf("\n");
//
//	printf("$20 bills : %d\n", twenties);
//	printf("$10 bills : %d\n", tens);
//	printf("$5 bills : %d\n", fives);
//	printf("$1 bills : %d\n", ones);
//
//	return 0;
//}