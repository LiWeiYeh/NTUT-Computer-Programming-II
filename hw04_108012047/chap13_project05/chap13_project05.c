/*****************************************************************/
/* Class: Computer Programming II, Fall 2019                     */
/* Author: Li-Wei Yeh						                     */
/* ID: 108012047						                         */
/* Date: 2019.10.16												 */
/* Purpose: Sums the entered elements from the command line		 */
/* Change History:												 */
/*****************************************************************/

// sums the entered elements
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	printf("Program to sum the entered elements\n");

	int i, sum = 0;

	for (i = 1; i < argc; i++) {
		sum += atoi(argv[i]);
	}

	printf("total: %d\n", sum);

	return 0;
}