 #include<iostream>
using namespace std;

int main()
{
	
	int a,b,c;
	
	cout<<"Enter your A : ";
	cin>>a;
	
	cout<<"A : "<<a;
	cout<<"\nEnter your B : ";
	cin>>b;
	cout<<"b : "<<b;
	
	cout<<"\nEnter your C : ";
	cin>>c;
	cout<<"c : "<<c;
	
	if(a>b && a>c){
		cout<<"\nA is max"<<a;
	}
	else if(b>c){
		cout<<"\nb is max"<<b;
	}
	else{
		cout<<"\nc is max"<<c;
	}
	

	
	return 0;
}
