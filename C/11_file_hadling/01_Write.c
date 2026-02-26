#include<stdio.h>
#include<conio.h>

int main()
{
//	 file path,mode 
//  mode : w,r,a

	FILE *file;

	file =  fopen("data.txt","w");
	
	if(file == NULL){
		printf("Error not Found File..");
		return 1;
	}
	
	fprintf(file,"Hello New File here");
	fclose(file);
	
	printf("data successfully print");
	
	return 0;
}
