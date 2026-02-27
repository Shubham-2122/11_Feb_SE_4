#include<stdio.h>
#include<conio.h>

struct Student{
	char name[50];
	int roll;
	float marks;
};

void main()
{
	struct Student s;
	printf("Enter your Roll No : ");
	scanf("%d",&s.roll);
	
	printf("Enter your name : ");
	scanf("%s",&s.name);
	
	printf("Enter your Marks : ");
	scanf("%f",&s.marks);
	
	printf("\n-----Student List ------");
	printf("\nRoll no : %d",s.roll);
	printf("\nName : %s",s.name);
	printf("\nMarks : %.1f",s.marks);
	
//	sizeof()
	
	getch();
}
