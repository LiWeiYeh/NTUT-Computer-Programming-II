///*****************************************************************/
///* Class: Computer Programming II, Fall 2019                     */
///* Author: Li-Wei Yeh			                                 */
///* ID: 108012047						                         */
///* Date: 2019.10.04											     */
///* Purpose: description of program function                      */
///* Change History: log the change history of the program         */
///*****************************************************************/
//
//// palindrome using pointers
//
//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <ctype.h>
//
//#define MAX_MSG_LENGTH 80
//
//int main(void)
//{
//	char msg[MAX_MSG_LENGTH], ch;
//	//
//	char *p;
//	char *q = &msg[0];
//	// asks the user to enter a message
//	printf("Enter a message : ");
//
//	// goes through the loop
//	while (q < &msg[MAX_MSG_LENGTH]) {
//		// getchar() gets the user message and stores it in ch
//		// the newline will automatically be created if the user presses the "enter" key
//		// if the char is equal to a newline, break.
//		if ((ch = getchar()) == '\n') {
//			break;
//		}
//		// if the character is alphabetical
//		if (isalpha(ch)) {
//			// makes ch uppercase and stores it into msg with *q, starting from msg[0]
//			*q = toupper(ch);
//			// appends the q, increasing the index of message by 1
//			q++;
//		}
//	}
//
//	// checks whether the first character of msg msg[0] is equal to the last character of message q - 1
//	// if equal, increase the first index and decrease last index by 1
//	for (p = &msg[0], q--; p < q; p++, q--) {
//		// if the characterss on the indexes aren't equal
//		if (*p != *q) {
//			break;
//		}
//	}
//
//	// if the program in the for loop hasn't breaked, so
//	// if the first halve of the sentence is the same as the last halve of the sentence
//	if (p >= q) {
//		// print that it's a palindrome
//		printf("The message is a palindrome\n");
//	}
//	// else
//	else {
//		// print that it's not a palindrome
//		printf("The message is NOT a palindrome\n");
//	}
//}