#include<iostream>
using namespace std;

class A{
	public:
		void getdata(){
			cout<<"\nA class";
		}
};

class B {
	public:
		void getB(){
			cout<<"\nB class";
		}
};

class C : public A , public B {
	public:
		void getC(){
			cout<<"\nC class";
		}
};



int main()
{
	C obj;
	obj.getC();
	obj.getB();
	obj.getdata();
		
	return 0;
}
