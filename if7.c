/*
Body Mass Index Calculator) Create a BMI calculator application that reads the user’s weight in pounds and height in inches (or, if you prefer, the user’s weight in kilograms and height in meters), then calculates and displays the user’s body mass index. Also, the application should display the following information from the Department of Health and Human Services/National Institutes of Health so the user can evaluate his/her BMI:
?????? =  ????????h??/(h??????h??^2 )

*/
#include <stdio.h>
int main ()
{
	float weight;
	float height;
	printf ("Enter weight and height\n");
	scanf("%f%f",&weight,&height);
	float bmi=weight/(height*height);
	printf("bmi=%d",bmi);
}
