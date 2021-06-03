#include<stdio.h>
int sum(int x,int y);
int multiple(int x,int y);
int main()
{
	int x,y;
	printf("enter two num\n");
	scanf("%d%d",&x,&y);
	printf("sum of x&y=%d",sum(x,y));
	printf("multible of x&y=%d",multiple(x,y));
}
int sum(int x,int y){
	return x+y;
	
}
int multiple(int x,int y){
	return x*y;
}
