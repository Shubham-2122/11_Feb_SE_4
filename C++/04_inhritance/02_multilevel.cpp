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

class C : public B{
	int c;
		public: 
		void putC(){
			cout<<"\nEnter c : ";
			cin>>c;
		}
		void getC(){
			cout<<"\nYour C : "<<c;
		}
};


int main(){
	
	C obj;
	obj.putA();
	obj.putB();
	obj.putC();
	
	obj.getA();
	obj.getB();
	obj.getC();
	
	return 0;
}
