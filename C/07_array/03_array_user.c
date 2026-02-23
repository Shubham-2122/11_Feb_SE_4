 #include<stdio.h>
#include<conio.h>

void main()
{
	int a[5];
	int i;
	
	for(i=0;i<5;i++){
		printf("Enter your Element : ");
		scanf("%d",&a[i]);
	}
	
	printf("\n---- Store A Element ----");
	
	for(i=0;i<=4;i++){
		printf("\na[%d] : %d",i,a[i]);
	}
	
	
	getch();
}
