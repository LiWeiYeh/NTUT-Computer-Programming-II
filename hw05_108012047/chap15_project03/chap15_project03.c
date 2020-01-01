///*****************************************************************/
///* class: computer programming ii, fall 2019                     */
///* author: Li-Wei Yeh				                             */
///* id: 108012047 (your student id here)                          */
///* date: 2020.01.01 (put program development started date here   */
///* purpose: sorts numbers in an array		                     */
///* change history: log the change history of the program         */
///*****************************************************************/
//
////quicksort
//
//
//#define _crt_secure_no_warnings
//#include <stdio.h>
//#include <stdlib.h>
//#include "quicksort.h"
//
//#define n 10
//
//
//int main()
//{
//
//	int a[n], i;
//
//	printf("enter %d numbers to be sorted: ", n);
//	for (i = 0; i < n; i++) {
//		scanf("%d", &a[i]);
//	}
//
//	quicksort(a, 0, n - 1);
//
//	printf("in sorted order: ");
//	for (i = 0; i < n; i++) {
//		printf("%d", a[i]);
//	}
//	printf("\n");
//
//	return 0;
//}
//
//void quicksort(int a[], int low, int high)
//{
//	int middle;
//
//	if (low >= high) return;
//	middle = split(a, low, high);
//	quicksort(a, low, middle - 1);
//	quicksort(a, middle + 1, high);
//}
//
//int split(int a[], int low, int high)
//{
//	int part_element = a[low];
//
//	for (;;) {
//		while (low < high && part_element <= a[high])
//			high--;
//		if (low >= high) break;
//		a[low++] = a[high];
//
//		while (low < high && a[low] <= part_element)
//			low++;
//		if (low >= high) break;
//		a[high--] = a[low];
//	}
//
//	a[high] = part_element;
//	return high;
//}