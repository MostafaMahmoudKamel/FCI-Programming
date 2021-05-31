#include<stdio.h >
int main()
{
	int arr[100],student,best=100;
	printf("enter num of student\n");
		scanf_s("%d", &student);
		for (int i = 1; i <= student; i++)
		{
			printf("enter grade of student\n");
			scanf_s("%d", &arr[i]);
			if (arr[i] >= best - 10)
				printf("a\n");
			else if (arr[i] >= best - 20)
				printf("%c\n", 'b');
			else if (arr[i] >= best - 30)
				printf("%c\n", 'c');
			else if (arr[i] >= best - 40)
				printf("%c\n", 'd');
			else
				printf("%c\n", 'f');
			
		}

	
	

}