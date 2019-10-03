///*****************************************************************/
///* Class: Computer Programming II, Fall 2019                     */
///* Author: Li-Wei Yeh (put your name here)                       */
///* ID: 108012047 (your student ID here)                          */
///* Date: 2019.09.22 (put program development started date here   */
///* Purpose: finds the closest departure time flight and arrival	 */
///* Change History: 2019.10.04 Fixed naming problems and changed  */
///*							  formatting						 */				
///*****************************************************************/
//
//// flight
//
//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
//{
//	const int MAX_MINUTES_IN_A_DAY = 1440;
//
//	// these numbers are in minutes
//	int departures[] = { 480, 583, 679, 767, 840, 945, 1140, 1305 };
//	int arrivals[] = { 616, 712, 811, 900, 968, 1075, 1280, 1438 };
//	// size of array departures array constant
//	const int SIZE_OF_DEPARTURES_ARRAY = sizeof(departures) / sizeof(departures[0]) - 1;
//	// counter for finding the closest index of the array
//	int closest;
//
//	// if desired time is closer to first item in array, choose first item
//	if (desired_time < departures[0]) {
//		if ((departures[0] - desired_time) < (MAX_MINUTES_IN_A_DAY - departures[SIZE_OF_DEPARTURES_ARRAY] + desired_time)) {
//			closest = 0;
//		}
//		else {
//			closest = SIZE_OF_DEPARTURES_ARRAY;
//		}
//	}
//	// if desired time is closer to last item item, choose last item
//	else if (desired_time > departures[SIZE_OF_DEPARTURES_ARRAY]) {
//		closest = SIZE_OF_DEPARTURES_ARRAY;
//	}
//	// find closest item in the middle part of the array
//	else {
//		closest = 0;
//		// while the desired time is later than the closest departure time at this point, go to the next index
//		while (desired_time > departures[closest]) {
//			closest++;
//		}
//		// if previous item in array is closer, change closest to index of the array item
//		if (departures[closest] - desired_time > desired_time - departures[closest - 1]) {
//			closest = closest - 1;
//		}
//	}
//
//	// assign the values to the departure time and arrival time
//	*departure_time = departures[closest];
//	*arrival_time = arrivals[closest];
//}
//
//void print_departure_and_arrival_time(int departure_time, int arrival_time, int HOURS_IN_MINUTES, int HOURS_IN_HALF_DAY) {
//	if (departure_time / HOURS_IN_MINUTES > HOURS_IN_HALF_DAY) {
//		// if it's between 12 and 13, add pm
//		if (departure_time / HOURS_IN_MINUTES < 13) {
//			printf("Closest departure time is %d:%.2d p.m.", (departure_time / HOURS_IN_MINUTES), (departure_time % HOURS_IN_MINUTES));
//		}
//		// else, subtract 12 hours and add pm
//		else {
//			printf("Closest departure time is %d:%.2d p.m.", ((departure_time / HOURS_IN_MINUTES) - 12), (departure_time % HOURS_IN_MINUTES));
//
//		}
//	}
//	else {
//		// if it's between 0 and 1, add 12 and add am
//		if (departure_time / HOURS_IN_MINUTES < 1) {
//			printf("Closest departure time is %d:%.2d a.m.", ((departure_time / HOURS_IN_MINUTES) + 12), (departure_time % HOURS_IN_MINUTES));
//		}
//		// else, add am
//		else {
//			printf("Closest departure time is %d:%.2d a.m.", (departure_time / HOURS_IN_MINUTES), (departure_time % HOURS_IN_MINUTES));
//		}
//	}
//
//	// formatting
//	printf("\n");
//
//	// prints closest arrival time in a.m. or p.m.
//	if (arrival_time / HOURS_IN_MINUTES > HOURS_IN_HALF_DAY) {
//		// if it's between 12 and 13, add pm
//		if (arrival_time / HOURS_IN_MINUTES < 13) {
//			printf("Closest arrival time is %d:%.2d p.m.", (arrival_time / HOURS_IN_MINUTES), (arrival_time % HOURS_IN_MINUTES));
//		}
//		// else, subtract 12 and add pm
//		else {
//			printf("Closest arrival time is %d:%.2d p.m.", ((arrival_time / HOURS_IN_MINUTES) - 12), (arrival_time % HOURS_IN_MINUTES));
//		}
//	}
//	else {
//		// if it's between 0 and 1, add 12 and add am
//		if (arrival_time / HOURS_IN_MINUTES < 1) {
//			printf("Closest arrival time is %d:%.2d a.m.", ((arrival_time / HOURS_IN_MINUTES) + 12), (arrival_time % HOURS_IN_MINUTES));
//		}
//		// else, add am
//		else {
//			printf("Closest arrival time is %d:%.2d a.m.", (arrival_time / HOURS_IN_MINUTES), (arrival_time % HOURS_IN_MINUTES));
//		}
//	}
//}
//
//int main(void)
//{
//	printf("Nearest flight calculator...\n");
//
//	// Constant values
//	const int HOURS_IN_MINUTES = 60;
//	const int HOURS_IN_HALF_DAY = 12;
//
//	int hours, minutes;
//	int desired_time, departure_time, arrival_time;
//
//
//
//	// Asks the user for a 24-hour time input in hh:mm format
//	printf("Enter a 24-hour time: ");
//	scanf("%d:%d", &hours, &minutes);
//
//	desired_time = hours * HOURS_IN_MINUTES + minutes;
//
//	// function call to find the closest flight
//	find_closest_flight(desired_time, &departure_time, &arrival_time);
//
//	// Prints closest departure time in a.m. or p.m.
//	print_departure_and_arrival_time(departure_time, arrival_time, HOURS_IN_MINUTES, HOURS_IN_HALF_DAY);
//
//	return 0;
//}