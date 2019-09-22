///*****************************************************************/
///* Class: Computer Programming II, Fall 2019                     */
///* Author: Li-Wei Yeh (put your name here)                       */
///* ID: 108012047 (your student ID here)                          */
///* Date: 2019.09.22 (put program development started date here   */
///* Purpose: finds the closest departure time flight				 */
///* Change History: log the change history of the program         */
///*****************************************************************/
//
//// flight
//
//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//
//
//void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
//{
//	const int MAX_HOURS_IN_A_DAY = 1440;
//
//	// these numbers are in minutes
//	int departures[] = { 480, 583, 679, 767, 840, 945, 1140, 1305 };
//	const int SIZE_OF_DEPARTURES_ARRAY = sizeof(departures) / sizeof(departures[0]) - 1;
//	int arrivals[] = { 616, 712, 811, 900, 968, 1075, 1280, 1438 };
//	int closest;
//
//
//	// if desired time is closer to first item in array, choose first item
//	if (desired_time < departures[0]) {
//		if ((departures[0] - desired_time) < (MAX_HOURS_IN_A_DAY - departures[SIZE_OF_DEPARTURES_ARRAY] + desired_time)) {
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
//	else {
//		closest = 0;
//		while (desired_time > departures[closest]) {
//			closest++;
//		}
//		// if previous item in array is closer, change closest to index of the array item
//		if (departures[closest] - desired_time > desired_time - departures[closest - 1]) {
//			closest = closest - 1;
//		}
//	}
//
//	*departure_time = departures[closest];
//	*arrival_time = arrivals[closest];
//}
//
//int main(void)
//{
//	printf("Hello world! \n");
//
//	int hours, minutes;
//	const int HOURS_IN_MINUTES = 60;
//	const int HOURS_IN_HALF_DAY = 12;
//	int desired_time, departure_time, arrival_time;
//
//	// Asks the user for a 24-hour time input in hh:mm format
//	printf("Enter a 24-hour time: ");
//	scanf("%d:%d", &hours, &minutes);
//
//	desired_time = hours * HOURS_IN_MINUTES + minutes;
//
//	find_closest_flight(desired_time, &departure_time, &arrival_time);
//
//	// Prints closest departure time in a.m. or p.m.
//	if (departure_time / HOURS_IN_MINUTES > HOURS_IN_HALF_DAY) {
//		printf("Closest departure time is %d:%.2d p.m.", (departure_time / HOURS_IN_MINUTES), (departure_time % HOURS_IN_MINUTES));
//	}
//	else {
//		printf("Closest departure time is %d:%.2d a.m.", (departure_time / HOURS_IN_MINUTES), (departure_time % HOURS_IN_MINUTES));
//	}
//
//	// formatting
//	printf("\n");
//
//	// prints closest arrival time in a.m. or p.m.
//	if (arrival_time / HOURS_IN_MINUTES > HOURS_IN_HALF_DAY) {
//		printf("Closest arrival time is %d:%.2d p.m.", (arrival_time / HOURS_IN_MINUTES), (arrival_time % HOURS_IN_MINUTES));
//	}
//	else {
//		printf("Closest arrival time is %d:%.2d a.m.", (arrival_time / HOURS_IN_MINUTES), (arrival_time % HOURS_IN_MINUTES));
//	}
//
//	return 0;
//
//}