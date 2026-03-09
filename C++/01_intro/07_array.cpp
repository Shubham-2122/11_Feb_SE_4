#include<iostream>
using namespace std;

void demo(){
	int i;
	for(i=1;i<=30;i++){
		cout<<"*";
	}
}


int main()
{
	int a[5],i;
	
	demo();
	
	printf("\n");
	for(i=0;i<5;i++){
		cout<<"Enter your Element : ";
		cin>>a[i];
	}
	
	demo();
	
	printf("\n");
	
	for(i=0;i<5;i++){
//		printf("\na[%d] : %d",i,a[i]);
		cout<<"\na["<<i<<"] : "<<a[i];
//		cout<<"\nvalue : "<<a[i];
	}
	
	return 0;
}
