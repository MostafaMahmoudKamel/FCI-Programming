#include<stdio.h>
#include<string.h>
void mo(char x[]);
int main()
{
	char x[100];
		printf("enter string\n");
		scanf_s("%s", &x,sizeof(x));
		mo(x);
}
void mo(char x[]) {
	int i;
	for (i = 0; i < strlen(x); i++) {
		if (x[i] <= 122 && x[i] >= 97)
			x[i] -= 32;
	}
	printf("%s", x);

}