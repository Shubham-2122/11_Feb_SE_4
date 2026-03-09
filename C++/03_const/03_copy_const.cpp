 #include<iostream>
 #include<cstring>
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
//		 2) parmater const 
		Student(int r,const char s[50]){
			roll = r;
			strcpy(name,s);
		}
		
//		3) copy constr ref
		Student(Student &sh){
			roll = sh.roll;
			strcpy(name,sh.name);
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
	
	Student s2(3,"sujal");
	s2.display();
	
	Student s3(s2);
	s3.display();
	
	return 0;
}
