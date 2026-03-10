  /*
 	Enc 
 	
 	1) public : global scope : all access funtion
 	2) private : only for class same class 
 	3) Protected : same class use but inhritance varibale child
 */
 
#include<iostream>
using namespace std;

class Student{
	private : 
		int money = 500;
		public:
			void display(){
				cout<<"\nYour money : "<<money;
			}
};

class Emp: public Student{
	public:
		void data(){
			cout<<"\nEmp Money : "<<money;
		}
};

int main(){
	
	return 0;
}
