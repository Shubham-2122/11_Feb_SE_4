 /*
 method overloading : one class in function name same but deffrent parameter
 */
 
#include<iostream>
using namespace std;

class Load{
	public:
		void display(){
			cout<<"\ndisplay function 1.";
		}
		void display(int x){
			cout<<"\nDisplay function 2.";
		}
		void display(int x,int y){
			cout<<"\nDisplay function 2.";
		}
};

int main(){
	
	Load data;
	data.display();
	data.display();
	data.display(10);
	
	return 0;
}
