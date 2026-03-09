#include<iostream>
using namespace std;

class A{
	public:
		void getdata(){
			cout<<"/nA class";
		}
};

class B : public A{
	public:
		void getB(){
			cout<<"\nB class";
		}
};

class C : public A{
	public:
		void getC(){
			cout<<"\nC class";
		}
};

int main()
{
	
	B data;
	data.getdata();
	data.getB();
	
	C obj;
	obj.getC();
	obj.getdata();
	
	return 0;
}
