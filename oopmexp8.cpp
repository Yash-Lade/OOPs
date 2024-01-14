#include<iostream>
using namespace std;

class overloading
{
	public :
		int a,b;
		
	void getvalue()
	{
		cout<<"\nEnter first number : ";
		cin>>a;
		cout<<"Enter second number: ";
		cin>>b;
		
	}
	
	void increment()
	{
		++a;++b;
	}
	
	void decrement()
	{
		--a;--b;
	}
	
	void display()
	{
		cout<<"The value of first no. is : "<<a<<" and second number is : "<<b<<endl;
	}
};

int main()
{
	cout<<"\n -- Operator Overloading by Yash Lade --\n";
	cout<<"\tEnrollment no. - 0832CS221229 \n";
	overloading o;
	
	o.getvalue();
	cout<<"\nThe original values are : \n";
	o.display();
	
	cout<<"\nAfter overloading !!\n";
	o.increment();
	o.display();
	cout<<"\n";
	o.decrement();
	o.display();
}
