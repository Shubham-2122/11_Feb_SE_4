/* Total Sum : 0 ; 5 : 5+4+3+2+1+0 = 15
*/

#include<stdio.h>
#include<conio.h>

int TotalSum(int n){
	int sum = 0,i;
	for(i=1;i<=n;i++){
		sum = sum + i;
	}
	return sum;
}

void main()
{
	
	int num;
	printf("Enter your Number : ");
	scanf("%d",&num);
	
	printf("\nNumber Of value : %d",num);
	printf("\nTotalSum : %d",TotalSum(num))
;	
	getch();
}
