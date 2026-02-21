/* without argument and without return value
	
	void fun-name(){
		printf("hello")
	}
	
	fun-name();
*/
#include<stdio.h>
#include<conio.h>

// function outside main
void demo(){
	printf("\nHello demo function\n");
}

void LineData(){
	int a;
	for(a=1;a<=20;a++){
		printf("*");
	}
}

void main()
{
	LineData();
	demo();
	LineData();
	printf("\nHello shubham\n");
	LineData();
	
	getch();
}
