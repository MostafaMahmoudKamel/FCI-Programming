/*
(Car-Pool Savings Calculator) Research several car-pooling websites. Create an application that calculates your daily driving cost, so that you can estimate how much money could be saved by car pooling, which also has other advantages such as reducing carbon emissions and reducing traffic congestion. The application should input the following information and display the user’s cost per day of driving to work:
a) Total miles driven per day.
b) Cost per gallon of gasoline.
c) Average miles per gallon.
d) Parking fees per day.
e) Tolls per day.

*/

#include <stdio.h>
int main ()
{
	int miles ;
	int Cost_gallon ;
	int Average_gallon;
	int Parking;
	int Tolls;
	int x;
	printf("Total miles driven per day\n");//meil
	scanf("%d",&miles);
	printf("Cost per gallon of gasoline\n");//galon
	scanf ("%d",&Cost_gallon );
	printf("Average miles per gallon\n");//how much 
	scanf("%d",&Average_gallon);
	printf("Parking fees per day\n");
	scanf("%d",&Parking );
	printf("Tolls per day\n");
	scanf("%d",&Tolls);
	x=miles/Cost_gallon*Average_gallon+Parking+Tolls;
	printf("daily cost%d",x);
}
