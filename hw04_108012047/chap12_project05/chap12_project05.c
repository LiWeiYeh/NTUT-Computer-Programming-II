///*****************************************************************/
///* Class: Computer Programming II, Fall 2019                     */
///* Author: Li-Wei Yeh						                     */
///* ID: 108012047						                         */
///* Date: 2019.10.04												 */
///* Purpose: Reverses a sentence									 */
///* Change History: log the change history of the program         */
///*****************************************************************/
//
//// reverse sentence
//#define _CRT_SECURE_NO_WARNINGS
//#define MAX_SENTENCE_LENGTH 80
//
//#include <stdio.h>
//
//int main(void)
//{
//	printf("Program to reverse a sentence\n");
//
//	char ch, sentence[MAX_SENTENCE_LENGTH + 1] = { ' ' }, terminator = '.',
//		*start, *finish = sentence + 1, *p = sentence;
//
//	printf("enter a sentence : ");
//	while (finish <= sentence + MAX_SENTENCE_LENGTH) {
//		ch = getchar();
//		// change this
//		if (ch == '\n' || ch == ' ' || ch == ',') {
//			terminator = ch;
//			break;
//		}
//		// change this
//		*p = ch;
//		p++;
//	}
//
//	printf("The sentence is: %s\n", sentence);
//
//	printf("Reversal of sentence : ");
//
//	for (start = (finish); start >= sentence; start--) {
//		if (*start == ' ') {
//			for (p = start; p < finish; p++) {
//				// change this
//				putchar(start);
//			}
//			finish = start;
//		}
//	}
//
//	printf("%c\n", terminator);
//
//	return 0;
//
//}