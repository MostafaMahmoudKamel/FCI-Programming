#include <stdio.h >
int main()
{
	int arr[10] = {1,1,2,1,3,5,3,2,1,4};
	
	for (int i = 0; i < 10; i++)
	{
		int j;
		
		for (j = 0; i > j; j++) {
			if (arr[i] == arr[j])
				break;
		}
		if (i == j)
			printf("%d", arr[i]);
			
		
				
			
		
	}
}