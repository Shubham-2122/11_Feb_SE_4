//3) without arugemnt and with return value

#include<stdio.h>
#include<conio.h>

// function outside main
int Demo(){
	return 42;
}

void main()
{
	
	printf("\ndata : %d",Demo());
	printf("\ndata : %d",Demo());
	getch();
}
