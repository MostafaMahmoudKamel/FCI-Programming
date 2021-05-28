/*

Summation) Write a C program to compute the summation of the range [L, R] inclusive. Don’t use loops. Example, [1, 3] = 1+2+3=6. [4,8] = 4+5+6+7+8 = 30. The first number or range (L) and the last number of range (R), while ( 1=<?? ,??=10^9  , ??<=?? )


*/
#include <stdio.h>
int main ()
{
int r,l;//r==>small num   l ==>larg num 
printf("enter the rang\n");
scanf("%d %d",&r,&l);	
int b=r-1;
int c=l+1;
int x=l*c/2-(r*b/2);
printf ("x=%d",x);
	
}
