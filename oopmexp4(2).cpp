#include<iostream>
using namespace std;

class complex
{
	public:
		int a,b;
		
	complex(void);  //Constructor is created here
	void print()
	{
		cout<<" A is = "<<a<<" and B is = "<<b;
	}
};
complex::complex(void)
{
	a=10;
	b=5;
}
int main()
{
	complex c;
	
	c.print();
}
