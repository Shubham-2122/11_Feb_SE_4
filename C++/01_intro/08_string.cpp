#include<iostream>
using namespace std;

int main(){
	
//	char name1[20];
	string name1;
	
	cout<<"Enter your Name : ";
//	cin>>name1;
	getline(cin,name1); // space count not use
	cout<<"Your name : "<<name1;
	
	return 0;
}
