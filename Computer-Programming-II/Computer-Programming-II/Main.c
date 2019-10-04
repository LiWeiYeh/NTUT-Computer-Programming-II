/*****************************************************************/
/* Class: Computer Programming II, Fall 2019                     */
/* Author: Li-Wei Yeh (put your name here)                       */
/* ID: 108012047 (your student ID here)                          */
/* Date: 2019.09.22 (put program development started date here   */
/* Purpose: counts the amount of bills needed					 */
/* Change History: log the change history of the program         */
/*****************************************************************/

// reverse sentence
#define _CRT_SECURE_NO_WARNINGS
#define MAX_SENTENCE_LENGTH 80

#include <stdio.h>

int main(void)
{
	printf("Program to reverse a sentence\n");

	char ch, sentence[MAX_SENTENCE_LENGTH + 1] = { ' ' }, terminator = '.',
		*start, *finish = sentence + 1, *p = sentence;

	printf("enter a sentence : ");
	while (finish <= sentence + MAX_SENTENCE_LENGTH) {
		ch = getchar();
		if (ch == '\n' || ch == ' ' || ch == ',') {
			terminator = ch;
			break;
		}
		*p = ch;
		p++;
	}

	printf("The sentence is: %s\n", sentence);

	printf("Reversal of sentence : ");

	for (start = (finish); start >= sentence; start--) {
		if (*start == ' ') {
			for (p = start; p < finish; p++) {
				putchar(start);
			}
			finish = start;
		}
	}

	printf("%c\n", terminator);

	return 0;

}