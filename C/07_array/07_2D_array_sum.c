 #include<stdio.h>
#include<conio.h>

void main()
{
	int a[2][2],i,j;
	int b[2][2],sum[2][2];
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Eneter Your Elemenet : %d row : %d col :- ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("---- A Array Elemet ----");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\na[%d][%d] : %d",i,j,a[i][j]);
		}
	}
	printf("\n");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Eneter Your Elemenet : %d row : %d col :- ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("---- B Array Elemet ----");
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\nb[%d][%d] : %d",i,j,b[i][j]);
		}
	}
	
	printf("---- Sum : Array Elemet ----");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\nsum[%d][%d] : %d",i,j,sum[i][j]);
		}
	}

	
	getch();
}
