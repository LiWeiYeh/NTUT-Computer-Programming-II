/*****************************************************************/
/* Class: Computer Programming II, Fall 2019                     */
/* Author: Li-Wei Yeh			                                 */
/* ID: 108012047						                         */
/* Date: 2019.10.04											     */
/* Purpose: Find the smallest and largest number in an array	 */
/* Change History: 2019.10.09 Fixed an error			         */
/*****************************************************************/

// find max and min in an array
#define _CRT_SECURE_NO_WARNINGS
#define N 10

#include <stdio.h>

void max_min(int a[], int n, int *max, int *min) {

	int *p;

	*max = *min = *a;

	for (p = a; p < (a + n); p++) {
		if (*p > *max) {
			*max = *p;
		}
		if (*p < *min) {
			*min = *p;
		}
	}
	
}

int main(void)
{
	printf("Program to print the smallest and biggest number in an array\n");

	int NumbersArray[N], i, biggest, smallest;

	printf("Enter %d numbers: ", N);
	for (i = 0; i < N; i++) {
		scanf("%d", &NumbersArray[i]);
	}

	printf("The entered numbers are: ");
	for (i = 0; i < N; i++) {
		printf("%d ", NumbersArray[i]);
	}

	max_min(NumbersArray, N, &biggest, &smallest);

	printf("Printing the smallest and largest numbers...\n");
	printf("Largest number is %d\n", biggest);
	printf("Smallest number is %d\n", smallest);

	return 0;
}