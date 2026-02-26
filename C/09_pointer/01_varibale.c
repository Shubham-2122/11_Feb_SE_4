#include<stdio.h>
#include<conio.h>

void main()
{
	int n; // varibale 
	int *p; //pointer trigger 
	
//	int **x; //poniter triiger
	
	printf("Enter your num : ");
	scanf("%d",&n);
	
	p = &n; // address 
	printf("\nnum : %d",n);
	printf("\np : %d",p); // address
	printf("\npointer num : %u",*p);
	
	
	getch();
}
