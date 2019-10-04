/*****************************************************************/
/* Class: Computer Programming II, Fall 2019                     */
/* Author: Li-Wei Yeh			                                 */
/* ID: 108012047						                         */
/* Date: 2019.10.04											     */
/* Purpose: description of program function                      */
/* Change History: log the change history of the program         */
/*****************************************************************/

// palindrome

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>

#define MAX_MSG_LENGTH 80

int main(void)
{
	char msg[MAX_MSG_LENGTH], ch;
	// counters
	int i, n = 0;

	// asks the user to enter a message
	printf("Enter a message : ");

	// goes through the loop
	while (n < MAX_MSG_LENGTH) {
		// getchar() gets the user message and stores it in ch
		// the newline will automatically be created if the user presses the "enter" key
		// if the char is equal to a newline, break.
		if ((ch = getchar()) == '\n') {
			break;
		}
		// if the character is alphabetical
		if (isalpha(ch)) {
			// makes ch uppercase and stores it into msg with index n
			msg[n] = toupper(ch);
			// increases the index
			n++;
		}
	}

	// checks whether the first character index i is equal to the last index n - 1
	// if equal, increase the first index and decrease last index by 1
	for (i = 0; i < n / 2; i++) {
		// if the characterss on the indexes aren't equal
		if (msg[i] != msg[n - i - 1]) {
			// break
			break;
		}
	}

	// if the program in the for loop hasn't breaked, so
	// if the i counter is equal to the size of the string divided by 2
	if (i == n / 2) {
		// print that it's a palindrome
		printf("The message is a palindrome\n");
	}
	// if the program has breaked, so
	// if the counter i has breaked meaning the characters weren't the same
	else {
		// print that it's not a palindrome
		printf("The message is NOT a palindrome\n");
	}
}