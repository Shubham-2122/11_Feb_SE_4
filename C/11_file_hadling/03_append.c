#include<stdio.h>
#include<conio.h>

int main()
{
//	 file path,mode 
//  mode : w,r,a

	FILE *file;
	char str[100];

	file =  fopen("test.txt","a");
	
	if(file == NULL){
		printf("Error not Found File..");
		return 1;
	}
	
	fputs("\ndata append for tech 2",file);

	fclose(file);
	
	printf("data successfully print in file append");
	
	return 0;
} 
