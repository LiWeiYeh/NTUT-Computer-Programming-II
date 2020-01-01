///*****************************************************************/
///* class: computer programming ii, fall 2019                     */
///* author: li-wei yeh				                             */
///* id: 108012047 (your student id here)                          */
///* date: 2020.01.01 (put program development started date here   */
///* purpose:	sort series of words								 */
///* change history: log the change history of the program         */
///*****************************************************************/
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define MAX_WORDS 50
//#define WORD_LEN 20
//
//int read_line(char str[], int n);
//void quicksort(char **low, char **high);
//char **split(char **low, char **high);
//
//int main(void) {
//
//	char *words[MAX_WORDS], word[WORD_LEN + 1];
//	int i, num_words = 0;
//
//	for (;;) {
//		if (num_words == MAX_WORDS) {
//			printf(" -- no space left --\n");
//			break;
//		}
//
//		printf("enter a word : ");
//		read_line(word, WORD_LEN);
//		if (strlen(word) == 0) {
//			break;
//		}
//
//		words[num_words] = (char *)malloc(strlen(word) + 1);
//		if (words[num_words] == NULL) {
//			printf(" -- no space left --\n");
//			break;
//		}
//
//		strcpy(words[num_words], word);
//		num_words++;
//	}
//
//	quicksort(words, words + num_words - 1);
//
//	printf("\nIn sorted order : ");
//	for (i = 0; i < num_words; i++) {
//		printf(" %s", words[i]);
//	}
//	printf("\n");
//
//	return 0;
//
//}
//
//int read_line(char str[], int n) {
//
//	int ch, i = 0;
//
//	while ((ch = getchar()) != '\n') {
//		if (i < n) {
//			str[i++] = ch;
//		}
//	}
//
//	str[i] = '\0';
//
//	return i;
//}
//
//void quicksort(char **low, char **high)
//{
//	char middle;
//
//	if (low >= high) return;
//	middle = split(low, high);
//	quicksort(low, middle - 1);
//	quicksort(middle + 1, high);
//}
//
//int **split(char **low, char **high)
//{
//	int *part_element = *low;
//
//	for (;;) {
//		while (low < high && strcmp(part_element, *high) <= 0) {
//			high--;
//		}
//		if (low >= high) break;
//		*low++ = *high;
//
//		while (low < high && strcmp(*high, part_element) <= 0) {
//			low++;
//		if (low >= high) break;
//		*high-- = *low;
//	}
//
//	*high = part_element;
//	return high;
//}