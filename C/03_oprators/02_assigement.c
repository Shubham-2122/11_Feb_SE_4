#include<stdio.h>
#include<conio.h>

void main()
{
	float a;
	float b;
	
	printf("Enter your A : ");
	scanf("%f",&a);
	printf("A : %.2f",a);
	
	printf("\nEnter your B : ");
	scanf("%f",&b);
	printf("B : %.2f",b);
	
	float sum;
	sum = a + b;
	printf("\nsum : %.2f",sum);
	
	getch();
}
