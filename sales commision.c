/*
Use a single-subscripted array to solve the following problem. A company pays its salespeople
on a commission basis. The salespeople receive $200 per week plus 9% of their gross sales
for that week. For example, a salesperson who grosses $3000 in sales in a week receives $200
plus 9% of $3000, or a total of $470. Write a C program (using an array of counters) that
determines how many of the salespeople earned salaries in each of the following ranges
(assume that each salesperson’s salary is truncated to an integer amount):
a) $200–299
b) $300–399
c) $400–499
d) $500–599
e) $600–699
f) $700–799
g) $800–899
h) $900–999 */


#include<stdio.h>
int main()
{
	int a[100],x=0, b = 0, c = 0, d = 0, f = 0, g = 0, h = 0,e=0,num;
	printf("enter num of employee\n");
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++)
	{
		
		printf("enter employee gross sales\n");
		scanf_s("%d", &a[i]);
		a[i] = (200 + a[i] * .09);

		printf("Employee salery%d$\n", a[i]);
	}
	for (int i = 0; i < num; i++)
	{
		if (a[i] >= 200 && a[i] <= 299)
			x++;
		if (a[i] >= 300 && a[i] <= 399)
			b++;
		if (a[i] >= 400 && a[i] <= 499)
			c++;
		if (a[i] >= 500 && a[i] <= 599)
			d++;
		if (a[i] >= 600 && a[i] <= 699)
			e++;
		if (a[i] >= 700 && a[i] <= 799)
			f++;
		if (a[i] >= 800 && a[i] <= 899)
			g++;
		if (a[i] >= 900 && a[i] <= 999)
			f++;
	}
	printf("rang 200 to 299%9d  \n", x);
	printf("rang 300 to 399%9d\n", b);
	printf("rang 400 to 499%9d\n", c);
	printf("rang 500 to 599%9d\n", d);
	printf("rang 600 to 699%9d\n", e);
	printf("rang 700 to 799%9d\n", f);
	printf("rang 800 to 799%9d\n", g);
	printf("rang 900 to 999%9d\n", h);
}