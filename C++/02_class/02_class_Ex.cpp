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
			cin.ignore();
			cout<<"Enter your Name : ";
			getline(cin,name1);
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
	
	
	return 0;
}
