#include<iostream>
using namespace std;

class Student{
	private:
		//data memeber
		int Rollno;
		string name1;
	public:
		// memeber function
		void putData(){
			cout<<"\nEnter your Rollno : ";
			cin>>Rollno;
			cout<<"Enter your Name : ";
			cin>>name1;
		}
		void getData(){
			cout<<"\nYour Rollno : "<<Rollno;
			cout<<"\nYour Name : "<<name1;
		}
};

int main()
{
	
	Student s1;
	s1.putData();
	s1.getData();
	
	Student het;
	het.putData();
	het.getData();
	
	
	return 0;
}
