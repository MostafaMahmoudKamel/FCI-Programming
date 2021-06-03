/*
Write a function that takes the time as three integer arguments (for hours, minutes, and seconds) 
and returns the number of seconds.
*/

#include<stdio.h>
int time(int hour, int minute, int second);
int main()
{
	printf("enter hour and minute and second\n");
	int hour=3600, minute=60, second=1;
	scanf_s("%d%d%d", &hour, &minute, &second);
	printf("%d", time(hour, minute, second));

}
int time(int hour, int minute, int second) {
	int x = hour * 3600 + minute * 60 + second;
	return x;
	
}