///*****************************************************************/
///* Class: Computer Programming II, Fall 2019                     */
///* Author: Li-Wei Yeh						                     */
///* ID: 108012047						                         */
///* Date: 2019.10.04												 */
///* Purpose: Reverses a sentence									 */
///* Change History: 2019.10.11 Finished the homework				 */
///*				   2019.10.16 Added comments					 */
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
//		*start, *finish = sentence + 1, *p;
//
//	printf("enter a sentence : ");
//	while (finish <= sentence + MAX_SENTENCE_LENGTH) {
//		ch = getchar();
//		// change the terminator
//		if (ch == '\n' || ch == '.' || ch == '?' || ch == '!') {
//			terminator = ch;
//			break;
//		}
//		// add the character to finish
//		*finish = ch;
//		finish++;
//	}
//
//	printf("Reversal of sentence : ");
//
//	// prints the character word for words, starting from the right side.
//	for (start = (finish - 1); start >= sentence; start--) {
//		if (*start == ' ') {
//			for (p = start; p < finish; p++) {
//				putchar(*p);
//			}
//			finish = start;
//		}
//	}
//
//	// print the terminator
//	printf("%c\n", terminator);
//
//	return 0;
//
//}