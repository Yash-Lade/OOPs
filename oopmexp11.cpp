#include<bits/stdc++.h>
using namespace std;

int main()
{
	float a,b;
	
	cout<<"\nImplementation of Exception Handling !!";
	cout<<"\nStudent name - Yash Lade !!\n";
	cout<<"Enroll no. - 0832CS221229 \n";
	
	cout<<"\nEnter first number :";
	cin>>a;
	
	cout<<"Enter second number :";
	cin>>b;
	
	try
	{
		if(b==0)
		{
			throw b;
		}
		else
		cout<<"The division is :"<<a/b;
	}
	catch(int b)
	{
		cout<<"The value of b entered is invalid !!!";
		
	}
}
