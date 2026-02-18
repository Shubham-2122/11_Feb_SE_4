#include<stdio.h>
#include<conio.h>

void main()
{
	int a = 10;
	
	// pre inc ++a
	// post inc a++
	printf("\nA : %d",a);
	
	a++; //post inc
	printf("\nA : %d",a);
	
	++a;
	printf("\nA : %d",a); //12
	printf("\nA : %d",++a);//13	
	printf("\nA : %d",a++); //13 //14
	
	printf("\nA : %d",a++); // 14 //15
	printf("\nA : %d",++a); // 16
	printf("\nA : %d",a++); //16 //17
	printf("\nA : %d",a++); //17 //18
	printf("\nA : %d",++a); //19
	printf("\nA : %d",a++); //19 //20
	printf("\nA : %d",a++); //20 //21
	printf("\nA : %d",++a); //22
	
	
	printf("\nA : %d",--a);
	printf("\nA : %d",a--);
	printf("\nA : %d",a);
	
	
	getch();
}
