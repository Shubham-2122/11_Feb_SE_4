/*
	
	for(){
		for(){
		
		}
	}
	
			 *
	       * *
	     * * * 
	   * * * * 
	 * * * * *

*/
#include<stdio.h>
#include<conio.h>

void main()
{
	
	int r,c,k;
	
	for(r=1;r<6;r++){
		
//	space
		for(k=1;k<=5-r;k++){
			printf(" ");
		}
		
		for(c=1;c<=r;c++){
			printf("*");
		}
		printf("\n");
		
	}
	
	
	
	getch();
}

