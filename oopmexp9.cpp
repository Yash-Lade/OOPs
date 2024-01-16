#include<bits/stdc++.h>
using namespace std;

class a
{
	public:
	
	virtual void fun()
	{
		cout<<"\nIt is a virtual fun function !!!";
		
	}
};

class b:public a
{
	public:
		
		void fun()
		{
			cout<<"\nIt is a real fun function !!";
		}
};

int main()
{
	cout<<"\n Implementation of virtual function !!";
	cout<<"\n by : Yash Lade \n";
	cout<<"\n Enrollment : 0832CS221229\n";
	b obj;
	obj.fun();
}
