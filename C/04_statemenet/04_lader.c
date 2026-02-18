/*
	syntax :
	if(codition){
		output;
	}
	else if(codition){
		output;
	}
	else if(codition){
		output;
	}
	else{
		output;
	}

*/

#include<stdio.h>
#include<conio.h>

void main(){
	
	int marks;
	printf("Enter your Marks : ");
	scanf("%d",&marks);
	printf("Your Marks : %d",marks);
	
	if(marks > 100 || marks < 0){
		printf("\nMarks are invalid :  %d",marks);
	}
	else if(marks >= 85 && marks <=100){
		printf("\nA grade : %d",marks);
	}
	else if(marks >= 70 && marks < 85){
		printf("\nB grade : %d",marks);
	}
	else if(marks < 70 && marks >= 50){
		printf("\nC grade : %d",marks);
	}
	else if(marks >=33 && marks<50){
		printf("\nD grade : %d",marks);
	}
	else{
		printf("\nfell : %d",marks);
	}
	
	

	getch();
}
