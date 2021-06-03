/*Write a function to determine if an integer is even or odd

*/
#include<stdio.h>
int s (int num);
int main()
{
	int num;
	printf("enter num\n");
	scanf("%d",&num);
	if(s(num)==1)
	printf("even\n");
	else
	printf("odd\n");
}
int s (int num){
	
	if(num%2==0)
	return 1;
	else
	return 0;	
	
}
