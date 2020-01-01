///*****************************************************************/
///* class: computer programming ii, fall 2019                     */
///* author: Li-Wei Yeh				                             */
///* id: 108012047 (your student id here)                          */
///* date: 2020.01.01 (put program development started date here   */
///* purpose: formats an expression into an RPN expression	     */
///* change history: log the change history of the program         */
///*****************************************************************/
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//#include "stack.h"
//
///* Processes a single input character to determine appropriate response */
//void process_character(char ch) {
//
//	int operand1, operand2;
//
//}
//
//int main(void)
//{
//	char ch;
//	int op1, op2;
//
//	printf("Enter an RPN expression: ");
//	for (;;) {
//		while ((ch = getchar()) != EOF && ch != '\n')
//			process_character(ch);
//
//		scanf("  %c", &ch);
//		switch (ch) {
//
//		case '0': case '1': case '2': case '3': 
//		case '4': case '5': case '6': case '7': 
//		case '8':  case '9':
//			push(ch = '0');
//			break;
//		case '+': 
//			push(pop() + pop());
//			break;
//		case '-':   
//			op2 = pop();
//			op1= pop();
//			push(op2- op1);
//			break;
//		case '*': 
//			push(pop() * pop());
//			break;
//		case '/':   
//			op2 = pop();
//			op1 = pop();
//			push(op1 / op2);
//			break;
//		case '=':   
//			printf("Value of expression: %d\n", pop());
//			make_empty();
//			printf("Enter an RPN expression : ");
//			break;
//		default:    exit(EXIT_FAILURE);
//
//		}
//	}
//	
//	return 0;
//}