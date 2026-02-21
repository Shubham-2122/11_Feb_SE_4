/* with arugemnt and without return value
	void funtionnae(a,b){
		output()
	}
*/
#include<stdio.h>
#include<conio.h>

// function outside main

void demo(int a,int b){
	int sub;
	sub = a - b;
	printf("\nSub : %d",sub);
}


void main()
{
	demo(40,20);
	demo(50,20);
	
	getch();
}

