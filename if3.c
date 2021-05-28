/*
(Final Velocity) Write a program than asks the user to enter the initial velocity and acceleration of an object, and the time that has elapsed, places them in the variables u, a, and t, and prints the final velocity, v, and distance traversed, s, using the following equations.
a) ?? = ?? + ????
b) ?? = ???? + 0.5 ????^2

*/
#include <stdio.h>
int main()
{
	float a, t, u, s, v;
	printf("enter time\n");
	scanf("%f", &t);
	printf("enter acceleration\n");
	scanf("%f", &a);
	printf("enter intitial velosity\n");
	scanf("%f", &u);
	v = u + a*t;
	s = u * t + .5 * a * t * t;
	printf("velosity=%f", v);
	printf("distance=%f", s);
