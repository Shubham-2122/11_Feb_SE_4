/*
	syntax :
	if(codition){
		output;
	}
	else{
		output;
	}

*/

#include<stdio.h>
#include<conio.h>

void main(){
	
	int age;
	printf("Enter your age : ");
	scanf("%d",&age);
	printf("Your Age : %d",age);
	
	if(age >= 18){
		printf("\nAge is Allow..");
	}
	else{
		printf("\nAge is not Allow..");
	}

	
	
	getch();
}
