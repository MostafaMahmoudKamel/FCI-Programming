#include <stdio.h>
int s(int num);
int main()
{
	int num;
	printf("emter num\n");
	scanf("%d",&num);
	printf("%d",s(num));
}
int s(int num){
	int sum=0;
	for(;num!=0;){
		sum=sum+num%10;
	num=num/10;
	}
	return sum;
}
