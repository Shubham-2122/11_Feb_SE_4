#include<stdio.h>
#include<conio.h>

union Student{
	char name[50];
	int rollno;
	float marks;
};

void main()
{
	
	union Student s1;
	printf("Enter your Rollno : ");
	scanf("%d",&s1.rollno);
	
	printf("Enter your Name : ");
	scanf("%s",&s1.name);
	
	printf("Enter your Marks : ");
	scanf("%f",&s1.marks);
	
	printf("\n----Student list ------");
	printf("\nRollno : %d",s1.rollno);
	printf("\nName : %s",s1.name);
	printf("\nMarks: %.2f",s1.marks);
	getch();
}
