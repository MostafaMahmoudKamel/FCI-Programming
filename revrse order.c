#include <stdio.h>
int main()
{

	int arr[9] = { 1,2,3,4,5,6,7,8,9 };
	for (int i = 8; i >= 0; i--)
	{
		printf("%2d",arr[i]);
	}

}