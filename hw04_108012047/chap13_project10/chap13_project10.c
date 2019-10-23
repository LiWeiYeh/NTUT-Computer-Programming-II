/////*****************************************************************/
///* Class: Computer Programming II, Fall 2019                     */
///* Author: Li-Wei Yeh						                     */
///* ID: 108012047						                         */
///* Date: 2019.10.16												 */
///* Purpose: Reverse the name									 */
///* Change History:												 */
///*****************************************************************/
//
//// reverse name
//#define _CRT_SECURE_NO_WARNINGS
//#define NAME_LEN 30
//
//#include <stdio.h>
//#include <string.h>
//
//void read_line(char str[], int n) {
//
//	printf("Enter a first and last name: ");
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
//void reverse_name(char *name) {
//
//	char fi[5];
//	char *p = name;
//
//	// find where the string is not a space
//	while (*p == ' ') {
//		p++;
//	}
//	// fi name becomes the initial letter
//	sprintf(fi, ", %c.", *p);
//
//	// skip the first name
//	while (*p != ' ') {
//		p++;
//	}
//
//	// skip the spaces in between
//	while (*p == ' ') {
//		p++;
//	}
//
//	// last name. if it's not a space and not a null terminator
//	while ((*p != ' ') && (*p != '\0')) {
//		*name++ = *p++;
//	}
//
//	// add name and fi together
//	strcpy(name, fi);
//}
//
//
//int main(void)
//{
//	printf("Program to count the amount of vowels in a sentence\n");
//
//	char name[NAME_LEN + 1];
//
//	read_line(name, NAME_LEN);
//
//	reverse_name(name);
//
//	printf("%s\n", name);
//
//	return 0;
//}