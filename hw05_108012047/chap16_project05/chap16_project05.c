///*****************************************************************/
///* class: computer programming ii, fall 2019                     */
///* author: Li-Wei Yeh				                             */
///* id: 108012047 (your student id here)                          */
///* date: 2020.01.01 (put program development started date here   */
///* purpose:	prints nearest departure and arrival time			 */
///* change history: log the change history of the program         */
///*****************************************************************/
//
//#include <stdio.h>
//#include <stdlib.h>
//
//#define HOURS_PER_HALF_DAY 12
//#define MINUTES_PER_HOUR 60
//#define MINUTES_PER_HALF_DAY	(HOURS_PER_HALF_DAY * MINUTES_PER_HOUR)
//
//#define SIZE ((int)(sizeof(flights) / sizeof(flights[0])))
//
//struct flight {
//	int departure, arrival;
//};
//
//void put_time(int time);
//
//int main(void)
//{
//	struct flight flights[] {
//		{480, 616}, {585, 712}, (679, 811), {767, 900},
//		{840, 968}, {945, 1075}, {1140, 1260}, {1305, 1438}
//	};
//
//	int hours, minutes, time, closest;
//
//	printf("Enter a 24-hour time (hh:mm): ");
//	scanf("%d :%d", &hours, &minutes);
//	time = (hours * MINUTES_PER_HOUR) + minutes;
//
//	if (time <= flights[0].departure) {
//		closest = 0;
//	}
//	else if (time > flights[SIZE - 1].departure) {
//		closest = SIZE - 1;
//	}
//	else {
//		closest = 0;
//		while (time > flights[closest + 1].departure) {
//			closest++;
//		}
//		if ((flights[closest + 1].departure - time) < (time - flights[closest].departure)) {
//			closest++;
//		}
//	}
//
//	printf("Closest departure time is ");
//	put_time(flights[closest].departure);
//	printf(" , arriving at ");
//	put_time(flights[closest].departure);
//	printf("\n");
//
//	return 0;
//}
//
//void put_time(int time) {
//
//	int hour = time / MINUTES_PER_HOUR;
//
//	if (hour == 0) {
//		hour = HOURS_PER_HALF_DAY;
//	}
//	else if (hour > HOURS_PER_HALF_DAY) {
//		hour -= HOURS_PER_HALF_DAY;
//	}
//	printf("%d:%.2d ", hour, time % MINUTES_PER_HOUR);
//
//	if (time < HOURS_PER_HALF_DAY) {
//		printf("a.m.");
//	}else{
//		printf("p.m.")
//	}
//}