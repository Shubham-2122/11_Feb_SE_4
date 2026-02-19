#include<stdio.h>
#include<conio.h>


void main()
{
	int a,b,c;
	
	printf("Enter your A : ");
	scanf("%d",&a);
	printf("Enter your B : ");
	scanf("%d",&b);
	printf("Enter your C : ");
	scanf("%d",&c);
	
	if(a>b){
		if(a>c){
			printf("\nmax A Value : %d",a);
		}
		else{
			printf("\nmax C Value : %d",c);
		}
	}
	else if(b>c){
		printf("\nmax B Value : %d",b);
	}
	else{
		printf("\nmax A Value : %d",a);
	}
	
	getch();
}
