#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char str[50],str1[50];
	int l1,x;

//	one word
	printf("Enter your String : ");
//	scanf("%s",&str);
	
//	string get scanf function
	gets(str);
	
	printf("String : %s",str);
	
	l1 = strlen(str);
	
	printf("\nstring length : %d",l1);
	
	printf("\nEnter your string 1 : ");
	gets(str1);
	
	printf("string1 : %s",str1);
	
//	strcat(str,str1);
//	printf("\nString apped : %s",str);
	
	x = strcmp(str,str1);
	
	if(x == 0){
		printf("\nstring match..");
	}
	else{
		printf("\nstring not match..");
		
	}
	
	strupr(str);
	
	printf("\nuppercase String : %s",str);
	
	strlwr(str1);
	
	printf("\nLowercase string1 : %s",str1);
	
	
	


}
