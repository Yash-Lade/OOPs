#include<iostream>
using namespace std;

class fun
{
	public:
		int a,b,ch ;
	
	void area(int )
	{
		int r,area;
		cout<<"\tEnter the radius of circle :";
		cin>>r;
		
		area=3.14*r*r;
		
		cout<<"\tArea of circle is :"<<area;
	};
	
	void area(int ,int )
	{
		int area,l,b;
		cout<<"\tEnter the length  :";
		cin>>l;
		
		cout<<"\tEnter the breadth :";
		cin>>b;
		
		area=l*b;
		cout<<"\tArea of rectangle is :"<<area;
	}
	
	void area(int ,int ,float )
	{
		int bs,ht,area;
		
		cout<<"\tEnter the base  :";
		cin>>bs;
		
		cout<<"\tEnter the height :";
		cin>>ht;
		
		area=0.5*bs*ht;
		cout<<"\tArea of triangle is :"<<area;
	}
};

int main()
{
	int ch,r,l,b,bs,ht;
	cout<<"\tImplementation of function overloading\n";
	cout<<"\tBy: Yash Lade !!\n";
	
	fun f;
	do{
		cout<<"\n\n\tpress 1 to calculate area of circle \n";	
		cout<<"\tPress 2 to calculate area of rectangle \n";	
		cout<<"\tPress 3 to calculate area of triangle \n";	
		cout<<"\tPress 4 to end the program !! \n";	
		
		cout<<"\tEnter your choice :";
		cin>>ch;
		
		switch(ch)
		{
			case 1:f.area(r );break;	
			case 2:f.area(l,b );break;	
			case 3:f.area(bs,ht,0.5 );break;	
			case 4:break;
			default :cout<<"\tWrong choice !!";			
		}	
	}while(ch!=4);
	
	
}
