///*****************************************************************/
///* Class: Computer Programming II, Fall 2019                     */
///* Author: Li-Wei Yeh						                     */
///* ID: 108012047						                         */
///* Date: 2019.10.16												 */
///* Purpose: Count the number of vowels in a sentence			 */
///* Change History:												 */
///*****************************************************************/
//
//// reverse sentence
//#define _CRT_SECURE_NO_WARNINGS
//#define SENTENCE_LEN 80
//
//#include <ctype.h>
//#include <stdio.h>
//
//void read_line(char str[], int n) {
//
//	printf("Enter a sentence: ");
//
//	int ch, i = 0;
//
//	// while the sentence hasn't ended
//	while ((ch = getchar()) != '\n') {
//		// add character to the string, which is sentence.
//		if (i < n) {
//			str[i] = ch;
//			i++;
//		}
//	}
//
//	// end with null terminator
//	str[i] = '\0';
//}
//
//int count_vowels(const char *sentence) {
//
//	// initialize counter
//	int count = 0;
//
//	// while sentence hasn't ended
//	while (*sentence) {
//		switch (toupper(*sentence++)) {
//			// if the letter is a vowel, add 1 to count
//		case 'A': case 'E': case 'I': case 'O': case 'U':
//			count++;
//		}
//	}
//
//	return count;
//}
//
//int main(void)
//{
//	printf("Program to count the amount of vowels in a sentence\n");
//
//	char sentence[SENTENCE_LEN + 1];
//
//	read_line(sentence, SENTENCE_LEN);
//
//	printf("Your sentence contains %d vowels.\n", count_vowels(&sentence));
//
//	return 0;
//}