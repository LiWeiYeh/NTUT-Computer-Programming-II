/*****************************************************************/
/* Class: Computer Programming II, Fall 2019                     */
/* Author: xxx (put your name here)                              */
/* ID: 107990xxx (your student ID here)                          */
/* Date: 2019.03.07 (put program development started date here   */
/* Purpose: description of program function                      */
/* Change History: log the change history of the program         */
/*****************************************************************/

//quicksort


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "quicksort.h"

#define N 10

int main()
{

	int a[N], i;

	printf("Enter %d numbers to be sorted: ", N);
	for (i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}
	
	quicksort(a, 0, N - 1);

	printf("In sorted order: ");
	for (i = 0; i < N; i++) {
		printf("%d", a[i]);
	}
	printf("\n");

	return 0;
}