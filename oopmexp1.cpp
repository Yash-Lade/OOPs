#include<iostream>
using namespace std;

class empl
{
	protected:
		int x,y,id,base,da,sal;
		string name;
		
	void getdet();
	void cal();
	void showdet();
};

void empl:: getdet()
{
	cout<<"Enter the employee name :";
	getline(cin,name);
	
	cout<<"Enter employee ID :";
	cin>>id;
	
	cout<<"Enter employee base salary :";
	cin>>base;
	
	cout<<"Enter Dearness Allowance :";
	cin>>da;
}

void empl::cal()
{
	sal=base + da;
}

void empl::showdet()
{
	cout<<"The employee is : "<<name;
	
	cout<<"\nHaving ID number :"<<id<<"\nAnd The Final salary is :"<<sal;
}

int main()
{
	empl e;
	
	e.getdet();
	e.cal();
	e.showdet();
}
