  #include<stdio.h>
#include<conio.h>

void main()
{
	int a[5];
	int i,j;
	int temp;
	
	for(i=0;i<5;i++){
		printf("Enter your Element : ");
		scanf("%d",&a[i]);
	}
	
	printf("\n---- Store A Element ----");
	
	for(i=0;i<=4;i++){
		printf("\na[%d] : %d",i,a[i]);
	}
	
/*	DSA bubble sort 	
	50 20 30 40 10 
	20 50 30 40 10
	20 30 50 40 10
	20 30 40 50 10
	20 30 40 10 50
	20 30 10 40 50 
	20 10 30 40 50
	10 20 30 40 50
*/	

	printf("\n---- Ascdeing A Element ----");

	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i] > a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] =  temp;
			}
		}
	}
	
	for(i=0;i<=4;i++){
		printf("\na[%d] : %d",i,a[i]);
	}

	printf("\n---- Descdeing A Element ----");

	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i] < a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] =  temp;
			}
		}
	}
	
		for(i=0;i<=4;i++){
		printf("\na[%d] : %d",i,a[i]);
	}
	
	getch();
}
