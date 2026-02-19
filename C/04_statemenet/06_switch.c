 /*
 	
 	switch(key){
 		case 1:
 			output
 			break;
 		case 2:
 			output
 			break;
 		default:
 			
 	}
 	
 */
#include<stdio.h>
#include<conio.h>

void main()
{
	int day;
	printf("Enter your Day Num(0-7) : ");
	scanf("%d",&day);
	printf("your DayNum : %d",day);
	
	switch(day){
		case 1:
			printf("\nMonday..");
			break;
		case 2:
			printf("\nTuesday..");
			break;
		case 3:
			printf("\nWesd");
			break;
		case 4: 
			printf("\nThursday");
			break;
		case 5:
			printf("\nFriday");
			break;
		case 6:
			printf("\nstard");
			break;
		case 7:
			printf("\nsunday");	
			break;
		default :
			printf("\nInvalid Day..");
	}
	
	getch();
}
