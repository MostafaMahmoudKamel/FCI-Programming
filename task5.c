#include<stdio.h>
#include<string.h>
void fun(char arr[], int pass);
int main()
{
	char arr[10];
	char pass[20];
	printf("please enter user \n");
	scanf_s("%s", &arr,sizeof(arr));
	printf("please enter pass \n");
	scanf_s("%s", &pass,sizeof(pass));
	fun(arr, pass);
}
void fun(char arr[], int pass) {
	if (strcmp(arr, "admin") == 0 &&strcmp( pass,"admin12345")==0)
		puts("y");
	else
		puts("n");

}