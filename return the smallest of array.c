/*
Write a C program that takes an integer array and the array size is 5 and returns the
smallest element of it. 
*/
#include <stdio.h>
int main()
{
	int arr[5],i;
	int smallest = 5656;
	for ( i = 0; i <= 4; i++)
	{
		scanf_s("%d", &arr[i]);
		if (arr[i] < smallest)
		smallest = arr[i];
	}
	
	
	printf("%d", smallest);
}