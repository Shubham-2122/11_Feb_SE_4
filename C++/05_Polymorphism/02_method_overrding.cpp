/*
	runtime error : method overrding : class multiple inside function same 
*/

#include<iostream>
using namespace std;

class Pernet{
	public :
		void display(){
			cout<<"\nClass is Prenet";
		}
};

class Child: public Pernet{
	public:
		void display(){
			cout<<"\nClass is Child";
		}
};

int main()
{
	
	Child data;
	data.display();
//	data.display();
	
	data.Pernet::display();
	data.display();
	data.display();
	
	return 0;
}
