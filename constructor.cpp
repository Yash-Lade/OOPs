#include<iostream>
using namespace std;

class Rectangle
{
	public:
		int length,breadth;
		
	Rectangle()   //It is a default constructor having no arguments which sets the value of L & B as 0
	{
		length=0;  
		breadth=0;
	}
	
	Rectangle(int l, int b) //It is a parameterised constructor in which we passed some parameters
	{
		length=l;
		breadth=b;
	}
	
	Rectangle(Rectangle& r2)	//It is a copy consrtuctor in which values are copied from constructor R2
	{
		length=r2.length;
		breadth=r2.breadth;
	}
	
	~Rectangle()
	{
		cout<<"Destructor is called !!! \n";
	}
};

int main()
{
	Rectangle r1;	
	cout<<"Values in default constructor are :: "<<"L="<<r1.length<<" B="<<r1.breadth<<endl;
	
	Rectangle r2(5,10);	
	cout<<"Values in parameterised constructor are :: "<<"L="<<r2.length<<" B="<<r2.breadth<<endl;
	
	Rectangle r3;	
	cout<<"Values in copy constructor are :: "<<"L="<<r2.length<<" B="<<r2.breadth<<endl;
}
