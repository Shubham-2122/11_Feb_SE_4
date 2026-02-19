 /*
	
	for(assigement;codition;inc/dec){
		output;
	}

*/
#include<stdio.h>
#include<conio.h>

void main()
{

	int i;
	
//	for(i=1;i<=10;i++){
//		if(i<=5){
//			printf("\ni : %d",i);
//		}
//	}

//	for(i=1;i<=10;i++){
//		if(i>=5){
//			printf("\ni : %d",i);
//		}
//	}
	
	//1 2 3 4 8 9 10
	
//	for(i=1;i<=10;i++){
//		if(i<=4 || i>7){
//			printf("\ni : %d",i);
//		}
//	}
	
	// 5 6 7
//	for(i=1;i<=10;i++){
//		if(i>=5 && i<=7){
//			printf("\ni : %d",i);
//		}
//	}

		for(i=1;i<=10;i++){
		if(!(i<=4 || i>7)){
			printf("\ni : %d",i);
		}
	}

	
	getch();
}

