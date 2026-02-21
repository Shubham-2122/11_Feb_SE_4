 /* with argument and with return value
 	
 	int sum(int a,int b){
	 	return 
	}
 	sum(20,10)
 	
 */
 
#include<stdio.h>
#include<conio.h>

// function outside main

int sum(int a,int b){
	return a+b;
}


void main()
{
	
	int Demo = sum(30,20);
	printf("\nSum : %d",Demo);
	printf("\nSum1 : %d",sum(50,20));
	
	getch();
}
