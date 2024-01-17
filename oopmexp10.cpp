#include<iostream>
using namespace std;

class shape //Here Shape class is an abstract class
{
	public :
		virtual void getarea()=0;
		
	void setwidth();
	void getwidth();
	
	protected:
		int width,height;
};

class rectangle:public shape
{
	public:
	void getarea()
	{
		cout<<"\nEnter the height/length of rectangle : ";cin>>height;
		cout<<"Enter the width of rectangle : ";cin>>width;
		
		int area=height*width;
		
		cout<<"The area of rectangle is : "<<area<<"\n";
	}
};

class triangle:public shape
{	
	public:
	void getarea()
	{
		cout<<"\nEnter the height of triangle : ";cin>>height;
		cout<<"Enter the base/width of triangle : ";cin>>width;
		
		int area=0.5*width*height;
		cout<<"The area of triangle is : "<<area;
	}
};

int main()
{
	
	cout<<"\n -- Abstract Class Implementation by Yash Lade -- \n";

	rectangle r;
	triangle t;
	
	r.getarea();
	t.getarea();
}

