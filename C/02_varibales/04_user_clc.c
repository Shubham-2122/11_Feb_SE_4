 #include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	int b;
	
	printf("Enter your A : ");
	scanf("%d",&a);
	printf("A : %d",a);
	
	printf("\nEnter your B : ");
	scanf("%d",&b);
	printf("B : %d",b);

	int sum;
	
	sum = a + b;
	printf("\n---clc---");
	printf("\nSum : %d",sum);
	printf("\nSub : %d",a-b);
	printf("\nmul : %d",a*b);
	printf("\ndivi : %d",a/b);
	
	getch();
}
