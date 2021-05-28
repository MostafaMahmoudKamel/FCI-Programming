/*

counting 7s) Write a program that reads an integer of 5 digits and determines and prints how many digits in the integer are 7s. Example, if the input is 45777, the program outputs 3. If the input is 12541, the program outputs 0

*/
#include<stdio.h>
int main()
{
	int n, a, b, c, d, e, counter = 0;
	printf("enter n of 5 digit\n");
	scanf("%d", &n);
	a = n / 10000;
	b = n / 1000 % 10;
	c = n / 100 % 10;
	d = n / 10 % 10;
	e = n % 10;
	if (a % 7 == 0)
		counter++;
	if (b % 7 == 0)
		counter++;
	if (c % 7 == 0)
		counter++;
	if (d % 7 == 0)
		counter++;
	if (e % 7 == 0)
		counter++;
	printf("counter =%d", counter);
