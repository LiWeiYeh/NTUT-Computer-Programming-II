/*****************************************************************/
/* Class: Computer Programming II, Fall 2019                     */
/* Author: Li-Wei Yeh (put your name here)                       */
/* ID: 108012047 (your student ID here)                          */
/* Date: 2019.09.22 (put program development started date here   */
/* Purpose: counts the amount of bills needed					 */
/* Change History: 2019.10.04 added comments			         */
/*****************************************************************/

// dollar change
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// functino to calulate the amount of bills needed
void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
	// gets an int for how many twenties fit into the amount of dollars
	*twenties = dollars / 20;
	// reduce the amount of dollars by the amount of 20 dollar bills
	dollars -= (*twenties * 20);

	// gets an int for how many tens fit into the amount of dollars
	*tens = dollars / 10;
	// reduce the amount of dollars by the amount of 10 dollar bills
	dollars -= (*tens * 10);

	// gets an int for how many fives fit into the amount of dollars
	*fives = dollars / 5;
	// reduce the amount of dollars by the amount of 5 dollar bills
	dollars -= (*fives * 5);

	// gets an int for how many ones fit into the amount of dollars
	*ones = dollars / 1;
}

int main(void)
{
	printf("Program to calculate the least amount of bills needed \n");

	int amount, twenties, tens, fives, ones;

	// asks the user to enter a dollar amount
	printf("Enter a dollar amount...");
	// sets the dollar amount to the amount
	scanf("%d", &amount);

	// calls function to calculate the amount of bills needed
	pay_amount(amount, &twenties, &tens, &fives, &ones);



	printf("$20 bills : %d\n", twenties);
	printf("$10 bills : %d\n", tens);
	printf("$5 bills : %d\n", fives);
	printf("$1 bills : %d\n", ones);

	return 0;
}