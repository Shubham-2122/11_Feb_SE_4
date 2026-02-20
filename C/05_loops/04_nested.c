/*
	
	for(){
		for(){
		
		}
	}
	
	* * * * *
	* * * * *
	* * * * *
	* * * * *
	* * * * * 

*/
#include<stdio.h>
#include<conio.h>

void main()
{
	
	int r,c;
	
	for(r=1;r<=5;r++){
		for(c=1;c<=5;c++){
			printf("* ");
		}
		printf("\n");
	}
	
	getch();
}

