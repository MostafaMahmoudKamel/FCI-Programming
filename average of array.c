#include<stdio.h>
//# define size 100
int main()
{
	int num,sum=0;
	scanf_s("%d", &num);
	int arr[100];
	for (int i = 0; i < num; i++)
	{
		scanf_s("%d", &arr[i]);
		sum += arr[i];
	}
	float avg = sum / num;
	printf("%f", avg);
}