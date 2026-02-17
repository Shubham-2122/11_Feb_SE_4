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
	
//	int max;
//	max = a > b;
//	printf("\nmax : %d",max);

//	int min;
//	min = a < b;
//	printf("\nmin : %d",min);

	int compar = a == b;
	
	printf("\nEqul value : %d",compar);
	
	
	
	getch();
}
