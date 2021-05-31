/*
Write a program that reads an unspecified number of uppercase or lowercase alphabets,
and determines how many of them are vowels and how many are consonants. Enter zero to
signify the end of the input.*/

#include <stdio.h >
int main()
{
	int capital = 0, small = 0;
	char arr[50];// = //{ 'a','m','o','r','\0' };
scanf_s("%s", arr,sizeof(arr));
	for (int i = 0; i < 50; i++)
	{
		if (arr[i] >= 65 && arr[i] <= 90)
			capital++;
		if (arr[i] >= 97 && arr[i] <= 122)
			small++;
	}
	printf("%d", capital);
	printf("%d", small);


}




	


