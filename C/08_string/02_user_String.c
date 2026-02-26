#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str[50];

//	one word
	printf("Enter your String : ");
//	scanf("%s",&str);
	
//	string get scanf function
	gets(str);
	
	printf("String : %s",str);
	
}
