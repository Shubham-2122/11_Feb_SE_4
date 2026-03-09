/*
	class prenet{
		property 
	}
	class child : public prenet{
		property 
	}
	
	child data;
*/


#include<iostream>
using namespace std;

class A{
	
	int a;
	
	public: 
		void putA(){
			cout<<"Enter A : ";
			cin>>a;
		}	
		void getA(){
			cout<<"\nYour A : "<<a;
		}
};

class B : public A{
	int b;
	
	public: 
		void putB(){
			cout<<"\nEnter B : ";
			cin>>b;
		}
		void getB(){
			cout<<"\nYour B : "<<b;
		}
};


int main(){
	
	B obj;
	obj.putB();
	obj.getB();
	
	obj.putA();
	obj.getA();
	
	return 0;
}
