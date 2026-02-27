#include<stdio.h>
#include<conio.h>

int main()
{
//	 file path,mode 
//  mode : w,r,a

	FILE *file;
	char str[100];

	file =  fopen("test.txt","r");
	
	if(file == NULL){
		printf("Error not Found File..");
		return 1;
	}
	
	while(fgets(str,100,file) != NULL){
		printf("%s",str);
	}

	fclose(file);
	
//	printf("data successfully print");
	
	return 0;
}
