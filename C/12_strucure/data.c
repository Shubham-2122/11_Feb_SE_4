
 #include<stdio.h>
#include<conio.h>

void main()
{
	int a[2][2],i,j;
	int b[2][2],mul[2][2];
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Eneter Your Elemenet : %d row : %d col :- ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n\n\n\n---- Matrix 1 ----");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\n\n\n\na[%d][%d] : %d",i,j,a[i][j]);
		}
	}
	printf("\n");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Eneter Your Elemenet : %d row : %d col :- ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n\n\n\n---- Matrix 2 ----");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\n\n\n\nb[%d][%d] : %d",i,j,b[i][j]);
		}
	}
	
	printf("\n\n\n\n---- Result : multiplication Elemet ----");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			mul[i][j] = a[i][j] * b[i][j];
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\nmul[%d][%d] : %d",i,j,mul[i][j]);
		}
	}

	
	getch();
}
