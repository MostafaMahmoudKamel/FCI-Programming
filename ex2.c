/*
Write a function to compute the sum of float array. The array has 5 elements read from the user
*/


#include<stdio.h>
float sum_arr(float arr[], int size);
int main()
{
	int arr[100];
	;
	for (int i = 0; i < 5; i++)
	{
		printf("enter num of array\n");
		scanf_s("%f", &arr[i]);
}
	printf("%.1f",sum_arr(arr, 5));

}
float sum_arr(float arr[], int size) {
	float sum = 0.0;
	for (int i = 0; i < 5; i++) {
		sum += arr[i];
	}
	return sum;

}