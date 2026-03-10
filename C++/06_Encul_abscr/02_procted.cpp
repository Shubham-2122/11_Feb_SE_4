  /*
 	Enc 
 	
 	1) public : global scope : all access funtion
 	2) private : only for class same class 
 	3) Protected : same class use but inhritance varibale child
 */
 
#include<iostream>
using namespace std;

class Prenet{
	protected:
		int money = 500;
	public:
		void data(){
			cout<<"\nYour Money :"<<money;
		}
};

class Child : public Prenet{
	public:
		void demo(){
			cout<<"\Child Money : "<<money;
		}
};

int main(){
	
	Child obj;
	obj.demo();
	
	return 0;
}
