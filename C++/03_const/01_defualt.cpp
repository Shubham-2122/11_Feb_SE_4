#include<iostream>
using namespace std;

class Student{
	private:
		int roll;
		char name[50];
	public:
//		1)defualt Constr
			Student(){
				cout<<"Enter your Roll : ";
				cin>>roll;
				cout<<"Enter your Name : ";
				cin>>name; 
			}
		void display(){
			cout<<"\nYour Rollno : "<<roll;
			cout<<"\nYour Name : "<<name;
		}
};

int main()
{
	Student s1;
	s1.display();
	
	return 0;
}
