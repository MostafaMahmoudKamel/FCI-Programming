#include <stdio.h >
int function(int arr[], int size, int search);
int main()
{
	int arr[100], size, search;
	printf("enter size &search\n");
	scanf_s("%d%d", &size ,&search);
	for (int i = 0; i < size; i++)
	{
		printf("emter num of array\n");
		scanf_s("%d", &arr[i]);
	}
	printf("%d", function(arr, size, search));
}
int function(int arr[], int size, int search) {
	int counter = -1;
	for (int i = 0; i < size; i++)
	{
		if (search == arr[i]) {
			counter = i;
		}
	}
	return counter;

}

